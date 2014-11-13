<?php
/**
 * @file
 * iasc_group_login.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function iasc_group_login_defaultconfig_features() {
  return array(
    'iasc_group_login' => array(
      'user_default_permissions' => 'user_default_permissions',
      'user_default_roles' => 'user_default_roles',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function iasc_group_login_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit user profiles'.
  $permissions['edit user profiles'] = array(
    'name' => 'edit user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'iasc_group_login',
  );

  // Exported permission: 'register new account'.
  $permissions['register new account'] = array(
    'name' => 'register new account',
    'roles' => array(
      'group login' => 'group login',
    ),
    'module' => 'iasc_group_login',
  );

  return $permissions;
}

/**
 * Implements hook_defaultconfig_user_default_roles().
 */
function iasc_group_login_defaultconfig_user_default_roles() {
  $roles = array();

  // Exported role: group login.
  $roles['group login'] = array(
    'name' => 'group login',
    'weight' => 4,
  );

  return $roles;
}
