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
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['padding-left'] = 0; /* WAS: 'padding-left' */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_box']['padding-right'] = 0; /* WAS: 'padding-right' */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_color']['color'] = 0; /* WAS: 'color' */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_layout']['float'] = 0; /* WAS: 'float' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function iasc_wysiwyg_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['styleselect'] = 1; /* WAS: '' */
    $data['panopoly_wysiwyg_text']['settings']['css_classes'] = 'Unordered list=list-styled '; /* WAS: '' */
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['captionfilter']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['bold']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['forecolor']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['formatselect']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['italic']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifycenter']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['justifyleft']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['redo']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['strikethrough']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['undo']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['unlink']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['table']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['fullscreen']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['paste']['pastetext']);
    unset($data['panopoly_wysiwyg_text']['settings']['buttons']['pdw']);
  }
}
