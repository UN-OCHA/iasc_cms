<?php
/**
 * @file
 * iasc_wysiwyg.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function iasc_wysiwyg_defaultconfig_features() {
  return array(
    'iasc_wysiwyg' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function iasc_wysiwyg_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format iasc_wysiwyg'.
  $permissions['use text format iasc_wysiwyg'] = array(
    'name' => 'use text format iasc_wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'recommendations editor' => 'recommendations editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
