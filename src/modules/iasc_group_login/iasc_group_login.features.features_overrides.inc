<?php
/**
 * @file
 * iasc_group_login.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_group_login_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: og_features_permission
  $overrides["og_features_permission.node:oa_group:subscribe.roles|non-member"]["DELETED"] = TRUE;
  $overrides["og_features_permission.node:oa_group:unsubscribe.roles|member"]["DELETED"] = TRUE;
  $overrides["og_features_permission.node:oa_space:subscribe.roles|non-member"]["DELETED"] = TRUE;
  $overrides["og_features_permission.node:oa_space:unsubscribe.roles|member"]["DELETED"] = TRUE;

  // Exported overrides for: user_permission
  $overrides["user_permission.change layouts in place editing.roles|authenticated user"]["DELETED"] = TRUE;
  $overrides["user_permission.download any document files.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.download any image files.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.download any video files.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.use panels in place editing.roles|authenticated user"]["DELETED"] = TRUE;
  $overrides["user_permission.use text format panopoly_html_text.roles|editor"]["DELETED"] = TRUE;
  $overrides["user_permission.view private files.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.view private files.roles|editor"] = 'editor';
  $overrides["user_permission.view private files.roles|group login"] = 'group login';
  $overrides["user_permission.view private files.roles|viewer"] = 'viewer';

 return $overrides;
}
