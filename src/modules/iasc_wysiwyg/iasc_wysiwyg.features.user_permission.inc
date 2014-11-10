<?php
/**
 * @file
 * iasc_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iasc_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format iasc_wysiwyg'.
  $permissions['use text format iasc_wysiwyg'] = array(
    'name' => 'use text format iasc_wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
