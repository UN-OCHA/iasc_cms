<?php
/**
 * @file
 * iasc_wysiwyg.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function iasc_wysiwyg_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.panopoly_wysiwyg_text.weight"] = -6;

  // Exported overrides for: linkit_profiles
  $overrides["linkit_profiles.content_editors.data|text_formats|iasc_wysiwyg"] = 'iasc_wysiwyg';

 return $overrides;
}
