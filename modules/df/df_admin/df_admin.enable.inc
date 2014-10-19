<?php

/**
 * @file
 * DF Admin scenario handling functions.
 */

/**
 * Page callback; enable a scenario.
 */
function df_admin_page_enable($module) {
  if (!isset($_GET['token']) || !drupal_valid_token($_GET['token'], DRUPAL_ROOT . '/df/enable/' . $module)) {
    return drupal_access_denied();
  }
  return df_admin_enable_scenario($module);
}

/**
 * Function to enable a scenario.
 */
function df_admin_enable_scenario($module) {
  // Enable the scenario feature's DF dependencies.
  $module_list = system_rebuild_module_data();
  if (isset($module_list[$module])) {
    foreach ($module_list[$module]->info['dependencies'] as $dependency) {
      if (substr($dependency, 0, 2) == 'df_') {
        _df_admin_enable_feature($dependency);
      }
    }
  }

  // Enable and revert the scenario feature.
  if (!_df_admin_enable_feature($module)) {
    drupal_set_message(t('Enablement of @module failed.', array('@module' => $module)), 'error');
    return FALSE;
  }

  // Not all DFS require a batch content import, but some need this.
  // Resolves to the DF admin page if no reset callback present.
  if (!drupal_is_cli()) {
    $path = 'admin/df/reset/' . $module;
    $token = drupal_get_token(DRUPAL_ROOT . '/df/reset/' . $module);
    drupal_goto($path, array('query' => array('token' => $token)));
  }
  return TRUE;
}

/**
 * Helper function to enable a Feature properly.
 */
function _df_admin_enable_feature($module) {
  // Enable a disabled Features module.
  if (!module_exists($module)) {
    if (module_enable(array($module))) {
      watchdog('demo framework', 'Enabled module: ' . $module);
      drupal_set_message(t('@module enabled.', array('@module' => $module)), 'status');
      return TRUE;
    }
    else {
      drupal_set_message(t('@module does not exist or dependencies are missing.', array('@module' => $module)), 'error');
      return FALSE;
    }
  }
  drupal_set_message(t('@module is already enabled.', array('@module' => $module)), 'warning');
  return FALSE;
}

