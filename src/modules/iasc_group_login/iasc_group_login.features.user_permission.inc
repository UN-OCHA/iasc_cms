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

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'viewer' => 'viewer',
    ),
    'module' => 'user',
  );

  return $permissions;
}
