<?php
/**
 * @file
 * df_translator.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function df_translator_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer entity translation.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'locale',
  );

  // Exported permission: toggle field translatability.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate any entity.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate node entities.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  return $permissions;
}
