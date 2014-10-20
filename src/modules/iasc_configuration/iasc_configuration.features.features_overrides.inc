<?php
/**
 * @file
 * iasc_configuration.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_configuration_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: node
  $overrides["node.oa_space.title_label"] = 'Full Name';

 return $overrides;
}
