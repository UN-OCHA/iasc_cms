<?php
/**
 * @file
 * iasc_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function iasc_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: iasc_wysiwyg
  $profiles['iasc_wysiwyg'] = array(
    'format' => 'iasc_wysiwyg',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'strikethrough' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'formatselect' => 1,
          'styleselect' => 1,
          'removeformat' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'spellchecker' => array(
          'spellchecker' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'h1,h2,h3,h4,h5,h6,p,address,pre,div',
      'css_setting' => 'self',
      'css_path' => '%bsites/all/themes/custom/iasc/assets/stylesheets/screen.css',
      'css_classes' => 'Unordered list=list-styled ',
    ),
  );

  return $profiles;
}
