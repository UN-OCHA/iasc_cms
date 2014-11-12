<?php
/**
 * @file
 * iasc_permissions.features.inc
 */

/**
 * Implements hook_og_features_default_permissions_alter().
 */
function iasc_permissions_og_features_default_permissions_alter(&$data) {
  if (isset($data['node:oa_space:subscribe'])) {
    unset($data['node:oa_space:subscribe']['roles']['non-member']);
  }
  if (isset($data['node:oa_space:unsubscribe'])) {
    unset($data['node:oa_space:unsubscribe']['roles']['member']);
  }
}
