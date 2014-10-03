<?php

/**
 * @file
 * Definition of the 'Secondary Content' panel style.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Primary Content Styles'),
  'description' => t('Styles to use for secondary content'),
  'render pane' => 'iasc_primary_style_render_pane',
  'settings form' => 'primary_style_settings_form',
  'hook theme' => array(
    'iasc_primary_box' => array(
      'variables' => array('content' => NULL),
      'path' => drupal_get_path('theme', 'iasc') . '/panels/primary',
      'template' => 'iasc-primary-box',
    ),
  ),
);
