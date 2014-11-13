<?php
/**
 * @file
 * iasc_group_login.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iasc_group_login_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own access code'.
  $permissions['change own access code'] = array(
    'name' => 'change own access code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'access_code',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

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
