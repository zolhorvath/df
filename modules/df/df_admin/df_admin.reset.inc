<?php

/**
 * @file
 * DF Admin's reset page handling functions.
 */

/**
 * Page callback; reset a scenario.
 */
function df_admin_page_reset($module) {
  if (!isset($_GET['token']) || !drupal_valid_token($_GET['token'], DRUPAL_ROOT . '/df/reset/' . $module)) {
    return drupal_access_denied();
  }
  return df_admin_reset_scenario($module, TRUE);
}

/**
 * Function to process migrations in correct order to safely inject DFS
 * content into the system.
 */
function df_admin_reset_scenario($scenario, $rollback = TRUE) {
  // Check to see if scenario is not enabled.
  if (!module_exists($scenario)) {
    drupal_set_message(t('@scenario must be enabled before a reset can occur.', array('@scenario' => $scenario)), 'error');
    return;
  }

  // Revert all Features for proper reset.
  df_admin_revert_all();

  // Get list of modules implementing Migrate API.
  migrate_get_module_apis();

  // Set up operations array.
  $operations = array();

  // Set up pre-import routines via hook_df_pre_import().
  $routines = array();
  $routines = module_invoke_all('df_pre_import');
  drupal_alter('df_pre_import', $routines);
  
  // Add pre-import functions to the batch process.
  foreach ($routines as $routine) {
    $operations[] = $routine;
  }

  // Set up migrations array via hook_df_import().
  $migrations = array();
  $migrations = module_invoke_all('df_import');
  drupal_alter('df_import', $migrations);

  // Check for available migrations based on the scenario argument.
  if (isset($migrations[$scenario]) && !empty($migrations[$scenario])) {

    if ($rollback == TRUE) {
      // Queue migrations to rollback in the opposite order provided.
      foreach (array_reverse($migrations[$scenario]) as $machine_name) {
        migrate_static_registration(array($machine_name));
        $migration = Migration::getInstance($machine_name);
        $operations[] = array('migrate_ui_batch', array('rollback', $machine_name, array('unit' => 'items', 'value' => ''), FALSE));
      }
    }

    // Queue migrations to import in the provided order.
    foreach ($migrations[$scenario]  as $machine_name) {
      migrate_static_registration(array($machine_name));
      $migration = Migration::getInstance($machine_name);
      $operations[] = array('migrate_ui_batch', array('import', $machine_name, array('unit' => 'items', 'value' => ''), FALSE));
    }

    // Confirm if there was an attempt to run scenario migrations.
    $migrations_count = count($migrations[$scenario]);
    if ($migrations_count > 0) {
      $operations[] = array('drupal_set_message', array(t('@number demo migrations attempted.', array('@number' => $migrations_count)), 'status'));
    }

  }

  // Set up post-import routines via hook_df_post_import().
  $routines = array();
  $routines = module_invoke_all('df_post_import');
  drupal_alter('df_post_import', $routines);
 
  // Add post-import functions to the batch process.
  foreach ($routines as $routine) {
    $operations[] = $routine;
  }

  // Clear caches post-operations.
  $operations[] = array('drupal_flush_all_caches', array(''));
  $operations[] = array('drupal_set_message', array(t('All caches have been cleared.'), 'status'));

  // Rebuild defaultconfig (cleanup permissions).
  $operations[] = array('defaultconfig_rebuild_all', array(''));
  $operations[] = array('watchdog', array('demo framework', 'Rebuilt defaultconfig after enabling scenario: ' . $module));

  // Clear messages for non-Drush users providing a cleaner scenario reset.
  if (!drupal_is_cli()) {
    $messages = array('completed', 'status', 'warning');
    foreach ($messages as $message) {
      $operations[] = array('drupal_get_messages', array($message, TRUE));
    }
  }

  // Rollback and Import migration operations via Batch API.
  if (count($operations) > 0) {
    $batch = array(
        'operations' => $operations,
        'title' => t('Import processing'),
        'init_message' => t('Starting import process'),
        'file' => drupal_get_path('module', 'migrate_ui') . '/migrate_ui.pages.inc',
        'progress_message' => t('Importing Demo Framework Scenario...'),
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
  // No operations present, non-drush users get redirected.
  if (!drupal_is_cli() && empty($operations)) {
    drupal_goto('');
  }
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

