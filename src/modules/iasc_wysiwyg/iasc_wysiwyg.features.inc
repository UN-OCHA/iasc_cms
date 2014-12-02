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
 * Implements hook_default_linkit_profiles_alter().
 */
function iasc_wysiwyg_default_linkit_profiles_alter(&$data) {
  if (isset($data['content_editors'])) {
    $data['content_editors']->data['text_formats']['iasc_wysiwyg'] = 'iasc_wysiwyg'; /* WAS: '' */
  }
}
