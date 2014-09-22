<?php

/**
 * @file
 * Drush hook implementations for the Demo Framework Administation Screens
 * module.
 */

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
    'options' => array(
      'import' => 'Boolean, allows content to be imported post-enablement',
      'rollback' => 'Boolean, rollback existing content post-enablement',
    ),
    'aliases' => array('df-es'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  $items['reset-scenario'] = array(
    'description' => 'Resets a demo scenario',
    'arguments' => array(
      'scenario' => 'The name of the module that defines the scenario',
    ),
    'options' => array(
      'rollback' => 'Boolean, rollback existing content post-enablement',
    ),
    'aliases' => array('df-rs'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

/**
 * Enables a scenario.
 *
 * @param string $scenario
 *   The machine name of the scenario feature.
 */
function drush_df_admin_enable_scenario($scenario) {
  $import = drush_get_option('import', TRUE);
  module_load_include('inc', 'df_admin', 'df_admin.enable');
  df_admin_enable_scenario($scenario);

  // Optionally run the batch import of content.
  if ($import != FALSE) {
    $rollback = drush_get_option('rollback', FALSE);
    module_load_include('inc', 'df_admin', 'df_admin.reset');
    df_admin_reset_scenario($scenario, $rollback);
  }
}

/**
 * Resets content for a scenario.
 *
 * @param string $scenario
 *   The machine name of the scenario feature.
 * @param string $rollback
 *   Boolean: rollback existing demo content.
  */
function drush_df_admin_reset_scenario($scenario) {
  $rollback = drush_get_option('rollback', TRUE);
  module_load_include('inc', 'df_admin', 'df_admin.reset');
  df_admin_reset_scenario($scenario, $rollback);
}

