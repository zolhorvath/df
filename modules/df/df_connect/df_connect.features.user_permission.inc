<?php
/**
 * @file
 * df_connect.features.user_permission.inc
 */

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function df_connect_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer purr messages'.
  $permissions['administer purr messages'] = array(
    'name' => 'administer purr messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'purr_messages',
  );

  // Exported permission: 'administer sharethis'.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sharethis',
  );

  // Exported permission: 'view purr messages'.
  $permissions['view purr messages'] = array(
    'name' => 'view purr messages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'purr_messages',
  );

  return $permissions;
}
