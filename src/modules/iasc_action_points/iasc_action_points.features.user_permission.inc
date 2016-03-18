<?php
/**
 * @file
 * iasc_action_points.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iasc_action_points_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create action_point content'.
  $permissions['create action_point content'] = array(
    'name' => 'create action_point content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any action_point content'.
  $permissions['delete any action_point content'] = array(
    'name' => 'delete any action_point content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own action_point content'.
  $permissions['delete own action_point content'] = array(
    'name' => 'delete own action_point content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any action_point content'.
  $permissions['edit any action_point content'] = array(
    'name' => 'edit any action_point content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own action_point content'.
  $permissions['edit own action_point content'] = array(
    'name' => 'edit own action_point content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
