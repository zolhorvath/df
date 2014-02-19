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
  // Enable and revert the scenario feature's DF dependencies.
  $module_list = system_rebuild_module_data();
  foreach ($module_list[$module]->info['dependencies'] as $dependency) {
    if (substr($dependency, 0, 2) == 'df') {
      _df_admin_enable_feature($dependency);
    }
  }

  // Enable and revert the scenario feature.
  _df_admin_enable_feature($module);

  // Clear & rebuild Features key caches.
  features_get_info(NULL, NULL, TRUE);
  features_rebuild();

  // Not all DFS require a batch content import, but some need this.
  // Resolves to the DF admin page if no reset callback present.
  if (!drupal_is_cli()) {
    $path = 'admin/config/system/df/reset/' . $module;
    $token = drupal_get_token(DRUPAL_ROOT . '/df/reset/' . $module);
    drupal_goto($path, array('query' => array('token' => $token)));
  }
}

/**
 * Helper function to enable a Feature properly.
 */
function _df_admin_enable_feature($module) {
  // Enable a disabled Features module.
  if (!module_exists($module)) {
    module_enable(array($module));
    watchdog('demo framework', 'Enabled module: ' . $module);
  }
  // Revert an enabled Features module.
  if (module_exists($module)) {
    features_revert_module($module);
    watchdog('demo framework', 'Reverted module: ' . $module);
  }
}

