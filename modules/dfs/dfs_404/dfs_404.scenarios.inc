<?php

/**
 * @file
 * Scenarios hooks implemented by the DFS One profile.
 */

/**
 * Implements hook_scenarios_info().
 */
function dfs_404_scenarios_info() {
  return [
    'dfs_404' => [
      'type' => 'module',
      'label' => t('DFS 404'),
      'description' => t('Demo Framework Scenario for default 403 and 404 pages.'),
      'imports' => ['/data'],
    ],
  ];
}
