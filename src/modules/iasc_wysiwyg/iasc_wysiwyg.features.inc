<?php
/**
 * @file
 * iasc_wysiwyg.features.inc
 */

/**
 * Implements hook_filter_default_formats_alter().
 */
function iasc_wysiwyg_filter_default_formats_alter(&$data) {
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['weight'] = -6; /* WAS: -10 */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function iasc_wysiwyg_user_default_permissions_alter(&$data) {
  if (isset($data['use text format panopoly_wysiwyg_text'])) {
    unset($data['use text format panopoly_wysiwyg_text']['roles']['authenticated user']);
    unset($data['use text format panopoly_wysiwyg_text']['roles']['editor']);
  }
}
