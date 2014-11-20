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
