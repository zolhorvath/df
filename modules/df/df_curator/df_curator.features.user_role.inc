<?php
/**
 * @file
 * df_curator.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function df_curator_user_default_roles() {
  $roles = array();

  // Exported role: curator.
  $roles['curator'] = array(
    'name' => 'curator',
    'weight' => 3,
  );

  // Exported role: reviewer.
  $roles['reviewer'] = array(
    'name' => 'reviewer',
    'weight' => 4,
  );

  return $roles;
}
