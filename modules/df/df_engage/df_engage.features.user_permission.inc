<?php
/**
 * @file
 * df_engage.features.user_permission.inc
 */

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function df_engage_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create any df_engage_block bean'.
  $permissions['create any df_engage_block bean'] = array(
    'name' => 'create any df_engage_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'marketer' => 'marketer',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any df_engage_block bean'.
  $permissions['delete any df_engage_block bean'] = array(
    'name' => 'delete any df_engage_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'marketer' => 'marketer',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any organic_group content'.
  $permissions['delete any organic_group content'] = array(
    'name' => 'delete any organic_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own organic_group content'.
  $permissions['delete own organic_group content'] = array(
    'name' => 'delete own organic_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any df_engage_block bean'.
  $permissions['edit any df_engage_block bean'] = array(
    'name' => 'edit any df_engage_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'marketer' => 'marketer',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any organic_group content'.
  $permissions['edit any organic_group content'] = array(
    'name' => 'edit any organic_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own organic_group content'.
  $permissions['edit own organic_group content'] = array(
    'name' => 'edit own organic_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'view any df_engage_block bean'.
  $permissions['view any df_engage_block bean'] = array(
    'name' => 'view any df_engage_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
