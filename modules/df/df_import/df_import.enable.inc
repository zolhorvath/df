<?php

/**
 * @file
 * DF Import enable scenario handling functions.
 */

/**
 * Page callback; enable a scenario.
 */
function df_import_page_enable($module) {
  // Enable the Feature when necessary.
  if (!module_exists($module) && module_enable(array($module))) {
    features_revert_module($module);
  }

  // Not all DFS require a batch content import, but some need this.
  // Resolves to the DF admin page if no reset callback present.
  $path = 'admin/config/system/df/reset/' . $module;

  // Drupal Redirect
  drupal_goto($path);
  return '';
}

