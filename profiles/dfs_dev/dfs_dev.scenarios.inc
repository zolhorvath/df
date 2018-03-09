<?php

/**
 * @file
 * Scenarios hooks implemented by the DFS Dev profile.
 */

/**
 * Implements hook_scenario_import().
 */
function dfs_dev_scenario_import() {
  return [
    'dfs_dev' => _dfs_dev_migrations(),
  ];
}
