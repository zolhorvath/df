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
      'reset' => 'Boolean, allows content to be reset post-enablement',
    ),
    'aliases' => array('df-es'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  $items['reset-scenario'] = array(
    'description' => 'Resets a demo scenario',
    'arguments' => array(
      'scenario' => 'The name of the module that defines the scenario',
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
 * @param string $reset
 *   Boolean: reset demo content for the scenario.
 */
function drush_df_admin_enable_scenario($scenario, $reset = TRUE) {
  module_load_include('inc', 'df_admin', 'df_admin.enable');
  df_admin_page_enable($scenario);

  // Optional reset function.
  if ($reset != FALSE) {
    module_load_include('inc', 'df_admin', 'df_admin.reset');
    df_admin_page_reset($scenario);
  }
}

/**
 * Resets content for a scenario.
 *
 * @param string $scenario
 *   The machine name of the scenario feature.
 */
function drush_df_admin_reset_scenario($scenario) {
  module_load_include('inc', 'df_admin', 'df_admin.reset');
  df_admin_page_reset($scenario);
}

