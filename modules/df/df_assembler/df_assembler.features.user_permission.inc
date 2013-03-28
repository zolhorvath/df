<?php
/**
 * @file
 * df_assembler.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function df_assembler_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node landing_page content.
  $permissions['administer panelizer node landing_page content'] = array(
    'name' => 'administer panelizer node landing_page content',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page context.
  $permissions['administer panelizer node landing_page context'] = array(
    'name' => 'administer panelizer node landing_page context',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page defaults.
  $permissions['administer panelizer node landing_page defaults'] = array(
    'name' => 'administer panelizer node landing_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page layout.
  $permissions['administer panelizer node landing_page layout'] = array(
    'name' => 'administer panelizer node landing_page layout',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page overview.
  $permissions['administer panelizer node landing_page overview'] = array(
    'name' => 'administer panelizer node landing_page overview',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page settings.
  $permissions['administer panelizer node landing_page settings'] = array(
    'name' => 'administer panelizer node landing_page settings',
    'roles' => array(
      'curator' => 'curator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: create landing_page content.
  $permissions['create landing_page content'] = array(
    'name' => 'create landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any landing_page content.
  $permissions['delete any landing_page content'] = array(
    'name' => 'delete any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'reviewer' => 'reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own landing_page content.
  $permissions['delete own landing_page content'] = array(
    'name' => 'delete own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any landing_page content.
  $permissions['edit any landing_page content'] = array(
    'name' => 'edit any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own landing_page content.
  $permissions['edit own landing_page content'] = array(
    'name' => 'edit own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'curator' => 'curator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
