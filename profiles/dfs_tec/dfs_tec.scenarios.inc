<?php

/**
 * @file
 * Scenarios hooks implemented by the DFS Tec module.
 */

/**
 * Implements hook_scenario_import().
 */
function dfs_tec_scenario_import() {
  $migrations = [];
  $migrations['dfs_tec'] = array(
    'import_dfs_tec_tags',
    'import_dfs_tec_article',
    'import_dfs_tec_basic',
    'import_dfs_tec_employee',
    'import_dfs_tec_image',
    'import_dfs_tec_page',
    'import_dfs_tec_service',
    'import_dfs_tec_hero',
    'import_dfs_tec_slideshow',
  );
  return (array) $migrations;
}
