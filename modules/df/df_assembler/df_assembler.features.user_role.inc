<?php
/**
 * @file
 * df_assembler.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function df_assembler_user_default_roles() {
  $roles = array();

  // Exported role: marketer.
  $roles['marketer'] = array(
    'name' => 'marketer',
    'weight' => 5,
    'machine_name' => '',
  );

  return $roles;
}
