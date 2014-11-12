<?php
/**
 * @file
 * iasc_permissions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_permissions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: og_features_permission
  $overrides["og_features_permission.node:oa_space:subscribe.roles|non-member"]["DELETED"] = TRUE;
  $overrides["og_features_permission.node:oa_space:unsubscribe.roles|member"]["DELETED"] = TRUE;

 return $overrides;
}
