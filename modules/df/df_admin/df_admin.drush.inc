<?php

/**
 * @file
 * Command-line tools to aid performing demo operations.
 */

use Drupal\migrate\Entity\MigrationInterface;
use Drupal\migrate\MigrateExecutable;
use Drupal\migrate_tools\DrushLogMigrateMessage;

/**
 * Implements hook_drush_command().
 */
function df_admin_drush_command() {
  $items = array();

  $items['enable-scenario'] = array(
    'description' => 'Enables a demo scenario',
    'arguments' => array(
      'scenario' => 'The name of the module that defines the scenario',
    ),
    'examples' => array(
      'df-es dfs_wem' => 'Install and import migrations for a Demo Framework Scenario',
    ),
    'drupal dependencies' => array('migrate_tools'),
    'aliases' => array('df-es'),
  );

  $items['uninstall-scenario'] = array(
    'description' => 'Uninstalls a demo scenario',
    'arguments' => array(
      'scenario' => 'The name of the module that defines the scenario',
    ),
    'examples' => array(
      'df-us dfs_wem' => 'Uninstall and roll back migrations for a Demo Framework Scenario',
    ),
    'drupal dependencies' => array('migrate_tools'),
    'aliases' => array('df-us'),
  );

  $items['reset-scenario'] = array(
    'description' => 'Resets a demo scenario',
    'arguments' => array(
      'scenario' => 'The name of the module that defines the scenario',
    ),
    'examples' => array(
      'df-rs dfs_wem' => 'Reset a Demo Framework Scenario rolling back content and re-importing.',
    ),
    'drupal dependencies' => array('migrate_tools'),
    'aliases' => array('df-rs'),
  );

  return $items;
}

/**
 * @param string $scenario
 */
function drush_df_admin_enable_scenario($scenario) {
  if (!$scenario) {
    drush_set_error('DF_ERROR', dt('You must specify a Demo Framework Scenario machine name, e.g. dfs_wem'));
    return;
  }

  // Retrieve alias context.
  $alias_context = drush_get_context('alias');
  $alias = !empty($alias_context) ? $alias_context : '@self';

  // Check if scenario is already enabled and install it.
  if (!Drupal::moduleHandler()->moduleExists($scenario)) {
    if (Drupal::service('module_installer')->install(array($scenario))) {
      drush_log(dt('Installed @name scenario module.', array('@name' => $scenario)), 'ok');
    }
  }
  else {
    drush_set_error('DF_ERROR', dt('The scenario !scenario is already enabled.', array('!scenario' => $scenario)));
    return;
  }

  // If we have pending batches, process them now.
  if (batch_get()) {
    if (php_sapi_name() === 'cli' && function_exists('drush_backend_batch_process')) {
      drush_backend_batch_process();
    }
    else {
      batch_process();
    }
  }

  // Retreive the migrations for the given scenario.
  $migrations = df_admin_scenario_migrations($scenario);
  $log = new DrushLogMigrateMessage();

  // Run the migrations in the provided order.
  foreach ($migrations as $migration) {
    $migration = entity_load('migration', $migration);
    $executable = new MigrateExecutable($migration, $log);
    if (drush_op(array($executable, 'import'))) {
      drush_log(dt('Imported "@name" migration.', array('@name' => $migration->label())), 'ok');
    }
    \Drupal::moduleHandler()->invokeAll('df_admin_migration_finished', [$migration]);
  }

  // Rebuild cache after enabling scenario.
  drush_invoke_process($alias, 'cache-rebuild'); 
}

/**
 * @param string $scenario
 */
function drush_df_admin_uninstall_scenario($scenario) {
  if (!$scenario) {
    drush_set_error('DF_ERROR', dt('You must specify a Demo Framework Scenario machine name, e.g. dfs_wem'));
    return;
  }

  // Retrieve alias context.
  $alias_context = drush_get_context('alias');
  $alias = !empty($alias_context) ? $alias_context : '@self';

  // Check if scenario is already enabled and uninstall it.
  if (!Drupal::moduleHandler()->moduleExists($scenario)) {
    drush_set_error('DF_ERROR', dt('The scenario !scenario is not enabled.', array('!scenario' => $scenario)));
    return;
  }

  // Retrieve the migrations for the given scenario.
  $migrations = df_admin_scenario_migrations($scenario);

  // Reverse the order of the migrations.
  $migrations = array_reverse($migrations);

  // Rollback the migrations in the modified order.
  foreach ($migrations as $migration) {
    $log = new DrushLogMigrateMessage();
    $migration = entity_load('migration', $migration);
    $executable = new MigrateExecutable($migration, $log);
    if (drush_op(array($executable, 'rollback'))) {
      drush_log(dt('Rolled back "@name" migration.', array('@name' => $migration->label())), 'ok');
    }
  }

  // Uninstall the scenario.
  if (Drupal::service('module_installer')->uninstall(array($scenario))) {
    drush_log(dt('Uninstalled @name scenario module.', array('@name' => $scenario)), 'ok');
  }
}


/**
 * @param string $scenario
 */
function drush_df_admin_reset_scenario($scenario) {
  drush_log(dt('Initiated reset of @name scenario module.', array('@name' => $scenario)), 'warning');
  // Uninstall the scenario.
  drush_df_admin_uninstall_scenario($scenario);
  // Enable the scenario.
  drush_df_admin_enable_scenario($scenario);
}

