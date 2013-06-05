<?php
/**
 * @file
 * df_translator.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function df_translator_user_default_roles() {
  $roles = array();

  // Exported role: translator.
  $roles['translator'] = array(
    'name' => 'translator',
    'weight' => 6,
    'machine_name' => 'translator',
  );

  return $roles;
}
