<?php
/**
 * @file
 * iasc_meeting.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iasc_meeting_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer event registration'.
  $permissions['administer event registration'] = array(
    'name' => 'administer event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own event registration'.
  $permissions['administer own event registration'] = array(
    'name' => 'administer own event registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration'.
  $permissions['create event registration'] = array(
    'name' => 'create event registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration other anonymous'.
  $permissions['create event registration other anonymous'] = array(
    'name' => 'create event registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration other users'.
  $permissions['create event registration other users'] = array(
    'name' => 'create event registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration self'.
  $permissions['create event registration self'] = array(
    'name' => 'create event registration self',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any event registration'.
  $permissions['delete any event registration'] = array(
    'name' => 'delete any event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own event registration'.
  $permissions['delete own event registration'] = array(
    'name' => 'delete own event registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit event registration state'.
  $permissions['edit event registration state'] = array(
    'name' => 'edit event registration state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any event registration'.
  $permissions['update any event registration'] = array(
    'name' => 'update any event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own event registration'.
  $permissions['update own event registration'] = array(
    'name' => 'update own event registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view event registration'.
  $permissions['view event registration'] = array(
    'name' => 'view event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own event registration'.
  $permissions['view own event registration'] = array(
    'name' => 'view own event registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
