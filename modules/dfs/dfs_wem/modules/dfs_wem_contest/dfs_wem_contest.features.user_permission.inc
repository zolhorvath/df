<?php
/**
 * @file
 * dfs_wem_contest.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dfs_wem_contest_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create wem_contest content'.
  $permissions['create wem_contest content'] = array(
    'name' => 'create wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any wem_contest content'.
  $permissions['delete any wem_contest content'] = array(
    'name' => 'delete any wem_contest content',
    'roles' => array(
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own wem_contest content'.
  $permissions['delete own wem_contest content'] = array(
    'name' => 'delete own wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any wem_contest content'.
  $permissions['edit any wem_contest content'] = array(
    'name' => 'edit any wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own wem_contest content'.
  $permissions['edit own wem_contest content'] = array(
    'name' => 'edit own wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
