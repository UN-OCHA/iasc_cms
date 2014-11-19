<?php
/**
 * @file
 * iasc_group_login.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function iasc_group_login_user_default_roles() {
  $roles = array();

  // Exported role: group login.
  $roles['group login'] = array(
    'name' => 'group login',
    'weight' => 4,
  );

  // Exported role: viewer.
  $roles['viewer'] = array(
    'name' => 'viewer',
    'weight' => 5,
  );

  return $roles;
}
