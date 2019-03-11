<?php

/**
 * @file
 * Contains dfs_one.profile.
 */

/**
 * Helper function to return a list of migrations.
 *
 * @return array
 *   An array of migrations for dfs_one.
 */
function _dfs_one_migrations() {
  return [
    // 'import_file_demo_user_pictures',
    // 'import_user_demo_users',
    // 'import_block_basic',
    // 'import_block_hero',
    // 'import_block_map',
    // 'import_term_tags',
    // 'import_node_page',
    // 'import_node_article',
    // 'import_block_slideshow',
    // 'import_gallery_image',
    // 'import_media_image',
  ];
}

/**
  * Implements hook_scenarios_post_enable().
  *
  * @param bool $force_update
  *   TRUE for overwrite entities with matching ID but different UUID.
  * @param bool $writeEnable
  *   FALSE for read only operations, TRUE for real update/delete/create.
 */

function dfs_one_scenarios_post_enable($scenario) {

  // Import from df_tools_content
  if (\Drupal::moduleHandler()->moduleExists('df_tools_content')) {
    $importer = \Drupal::service('default_content_deploy.importer');
    $result_info = $importer->deployContent($force_update = TRUE, $writeEnable = TRUE);
    $import_status = $importer->importUrlAliases();
  }
}
