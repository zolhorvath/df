<?php

/**
 * @file
 * DFS WEM reset page handling functions.
 */

/**
 * Page callback; process migrations in correct order to safely inject DFS WEM
 * content into the system.
 */
function dfs_wem_page_reset() {
  migrate_get_module_apis();

  // List migration machine names in an order that respects dependencies.
  $migrations = array(
    'DFSWEMInterestsTerms',
    'DFSWEMUserPictures',
    'DFSWEMUsers',
    'DFSWEMProducts',
    'DFSWEMCommerceNodes',
    'DFSWEMProductReviewNodes',
    'DFSWEMContestNodes',
    'DFSWEMNewsVideo',
    'DFSWEMNewsNodes',
    'DFSWEMTweetNodes',
  );

  //Rollback migrations in the opposite order they were imported.
  foreach (array_reverse($migrations) as $machine_name) {
    $migration = Migration::getInstance($machine_name);
    $operations[] = array('migrate_ui_batch', array('rollback', $machine_name, 0));
  }

  //Import migrations in the correct order.
  foreach ($migrations as $machine_name) {
    $migration = Migration::getInstance($machine_name);
    $operations[] = array('migrate_ui_batch', array('import', $machine_name, 0));
  }

  // Rollback and Import operations via Batch API.
  if (count($operations) > 0) {
    $batch = array(
      'operations' => $operations,
      'title' => t('Import processing'),
      'init_message' => t('Starting import process'),
      'file' => drupal_get_path('module', 'migrate_ui') . '/migrate_ui.pages.inc',
      'progress_message' => t('Demo Content Indexing...'),
      'error_message' => t('An error occurred. Some or all of the import processing has failed.'),
      'finished' => 'dfs_wem_batch_finish',
    );
    batch_set($batch);
    batch_process('');
  }
  return '';
}

/**
 * Batch API finished callback - report results
 *
 * @param $success
 *  Ignored
 * @param $results
 *  List of results from batch processing
 * @param $operations
 *  Ignored
 */
function dfs_wem_batch_finish($success, $results, $operations) {
  unset($results['stopped']);
  if (user_access(MIGRATE_ACCESS_ADVANCED)) {
    foreach ($results as $result) {
      drupal_set_message($result);
    }
  }
}

