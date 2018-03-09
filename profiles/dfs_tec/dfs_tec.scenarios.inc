<?php

/**
 * @file
 * Scenarios hooks implemented by the DFS Tec profile.
 */

/**
 * Implements hook_scenario_import().
 */
function dfs_tec_scenario_import() {
  return [
    'dfs_tec' => _dfs_tec_migrations(),
  ];
}
