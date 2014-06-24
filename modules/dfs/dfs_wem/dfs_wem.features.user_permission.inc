<?php
/**
 * @file
 * dfs_wem.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dfs_wem_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node wem_commerce content'.
  $permissions['administer panelizer node wem_commerce content'] = array(
    'name' => 'administer panelizer node wem_commerce content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node wem_contest content'.
  $permissions['administer panelizer node wem_contest content'] = array(
    'name' => 'administer panelizer node wem_contest content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node wem_news content'.
  $permissions['administer panelizer node wem_news content'] = array(
    'name' => 'administer panelizer node wem_news content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
