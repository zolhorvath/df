<?php

/**
 * @file
 * Contains dfs_tec.module.
 */

use Drupal\Core\Routing\RouteMatchInterface;

/**
 * Implements hook_module_implements_alter().
 */
function dfs_tec_module_implements_alter(&$implementations, $hook) {
  // Ensure migrations get set in the right order.
  if ($hook == 'migration_plugins_alter') {
    $preferred_order = [
      'import',
      'df_tools_user',
      'df_tools_blocks',
      'df_tools_slideshow',
      'dfs_tec',
    ];
    foreach ($preferred_order as $module) {
      if (isset($implementations[$module])) {
        unset($implementations[$module]);
        $implementations[$module] = $module;
      }
    }
  }
}

/**
 * Implements hook_migration_plugins_alter().
 */
function dfs_tec_migration_plugins_alter(&$definitions) {
  // Update source references in scenario migrations.
  $import = dfs_tec_scenario_import();
  foreach ($import['dfs_tec'] as $id) {
    $definitions[$id]['source']['path'] = str_replace('..', dirname(__FILE__), $definitions[$id]['source']['path']);
  }
}
