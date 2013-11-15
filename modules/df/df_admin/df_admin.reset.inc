<?php

/**
 * @file
 * DF Admin's reset page handling functions.
 */

/**
 * Page callback; process migrations in correct order to safely inject DFS
 * content into the system.
 */
function df_admin_page_reset($scenario) {

  // Clear & rebuild Features key caches
  features_get_info(NULL, NULL, TRUE);
  features_rebuild();

  migrate_get_module_apis();

  // Set up migrations array and hook_df_import().
  $migrations = array();
  $data = module_invoke_all('df_import', $migrations);
  drupal_alter('df_import', $migrations);

  // Check for available migrations based on the scenario argument.
  if (isset($migrations[$scenario]) && !empty($migrations[$scenario])) {

    // Queue migrations to rollback in the opposite order provided.
    foreach (array_reverse($migrations[$scenario]) as $machine_name) {
      $migration = Migration::getInstance($machine_name);
      $operations[] = array('migrate_ui_batch', array('rollback', $machine_name, 0, FALSE));
    }

    // Queue migrations to import in the provided order.
    foreach ($migrations[$scenario]  as $machine_name) {
      $migration = Migration::getInstance($machine_name);
      $operations[] = array('migrate_ui_batch', array('import', $machine_name, 0, FALSE));
    }

    // Rollback and Import migration operations via Batch API.
    if (count($operations) > 0) {
      $batch = array(
        'operations' => $operations,
        'title' => t('Import processing'),
        'init_message' => t('Starting import process'),
        'file' => drupal_get_path('module', 'migrate_ui') . '/migrate_ui.pages.inc',
        'progress_message' => t('Demo Content Indexing...'),
        'error_message' => t('An error occurred. Some or all of the import processing has failed.'),
        'finished' => 'df_admin_import_batch_finish',
      );
      batch_set($batch);
      if (!drupal_is_cli()) {
        batch_process('');
      }
      else {
        drush_backend_batch_process();
      }
    }
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
function df_admin_import_batch_finish($success, $results, $operations) {
  unset($results['stopped']);
  if (user_access(MIGRATE_ACCESS_ADVANCED)) {
    foreach ($results as $result) {
      drupal_set_message($result);
    }
  }
}

