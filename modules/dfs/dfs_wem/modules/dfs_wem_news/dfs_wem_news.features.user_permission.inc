<?php
/**
 * @file
 * dfs_wem_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dfs_wem_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create wem_news content'.
  $permissions['create wem_news content'] = array(
    'name' => 'create wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any wem_news content'.
  $permissions['delete any wem_news content'] = array(
    'name' => 'delete any wem_news content',
    'roles' => array(
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own wem_news content'.
  $permissions['delete own wem_news content'] = array(
    'name' => 'delete own wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any wem_news content'.
  $permissions['edit any wem_news content'] = array(
    'name' => 'edit any wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own wem_news content'.
  $permissions['edit own wem_news content'] = array(
    'name' => 'edit own wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
