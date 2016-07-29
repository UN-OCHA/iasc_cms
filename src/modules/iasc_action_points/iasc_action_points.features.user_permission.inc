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

  // Exported permission: 'administer nodeaccess'.
  /*$permissions['administer nodeaccess'] = array(
    'name' => 'administer nodeaccess',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );*/

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

  // Exported permission: 'grant deletable node permissions'.
  /*$permissions['grant deletable node permissions'] = array(
    'name' => 'grant deletable node permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );*/

  // Exported permission: 'grant editable node permissions'.
  /*$permissions['grant editable node permissions'] = array(
    'name' => 'grant editable node permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );*/

  // Exported permission: 'grant node permissions'.
  /*$permissions['grant node permissions'] = array(
    'name' => 'grant node permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );*/

  // Exported permission: 'grant own node permissions'.
  /*$permissions['grant own node permissions'] = array(
    'name' => 'grant own node permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'nodeaccess',
  );*/

  return $permissions;
}
