<?php

/**
 * @file
 * DF Import enable scenario handling functions.
 */

/**
 * Page callback; enable a scenario.
 */
function df_admin_page_enable($module) {
  // Enable and revert the scenario feature's DF dependencies.
  $module_list = system_rebuild_module_data();
  foreach ($module_list[$module]->info['dependencies'] as $dependency) {
    if (substr($dependency, 0, 3) == 'df_') {
      _df_admin_enable_feature($dependency);
    }
  }

  // Enable and revert the scenario feature.
  _df_admin_enable_feature($module);

  // Not all DFS require a batch content import, but some need this.
  // Resolves to the DF admin page if no reset callback present.
  $path = 'admin/config/system/df/reset/' . $module;

  // Drupal Redirect
  drupal_goto($path);
  return '';
}

/**
 * Helper function to enable a Feature properly.
 */
function _df_admin_enable_feature($module) {
  // Enable the and revert a Features module.
  if (!module_exists($module) && module_enable(array($module))) {
    features_revert_module($module);
  }
}

