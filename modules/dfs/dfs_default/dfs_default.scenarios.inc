<?php

/**
 * @file
 * Scenarios hooks implemented by the DFS One profile.
 */

/**
 * Implements hook_scenarios_info().
 */
function dfs_default_scenarios_info() {
  return [
    'dfs_default' => [
      'type' => 'module',
      'label' => t('DFS Default'),
      'description' => t('Demo Framework Scenario for default pages like 403 and 404.'),
      'imports' => ['/data'],
    ],
  ];
}
