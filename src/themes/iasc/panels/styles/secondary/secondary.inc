<?php

/**
 * @file
 * Definition of the 'Secondary Content' panel style.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Secondary Content Styles'),
  'description' => t('Styles to use for secondary content'),
  'render pane' => 'iasc_secondary_style_render_pane',
  'pane settings form' => 'secondary_style_settings_form',
  'hook theme' => array(
    'secondary' => array(
      'variables' => array('content' => NULL, 'class'),
      'path' => drupal_get_path('theme', 'iasc') . '/panels/secondary',
      'template' => 'secondary',
    ),
  ),
);

/**
 * Render callback for a single pane.
 */
function theme_iasc_secondary_style_render_pane(&$vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $settings = $vars['settings'];

  if (!empty($pane->configuration['override_title'])) {
    $content->title = $pane->configuration['override_title_text'];
  }

  if (empty($content->content)) {
    return;
  }

  if (!empty($content->css_class)) {
    $class[] = $content->css_class;
  }
  $class[] = 'panel panel-default panel-secondary';
  $class[] = $settings['secondary_options'];

  if (!empty($settings['linked_list'])) {
    $class[] = $settings['linked_list'];
  }

  $output = theme('secondary', array(
    'content' => $content,
    'class' => implode(' ', $class))
  );

  return $output;
}

/**
 * Settings form callback.
 */
function secondary_style_settings_form($style_settings) {
  $form = '';
  $form['secondary_options'] = array(
    '#type' => 'select',
    '#title' => t('Select pane options'),
    '#options' => array(
      'panel-primary' => t('Featured image listing'),
      'panel-success' => t('Linked list (no images)'),
      'panel-info' => t('Extended text list (no images; wrapped text)'),
    ),
    '#default_value' => (isset($style_settings['secondary_options'])) ? $style_settings['secondary_options'] : FALSE,
    '#description' => t('Chose what kind of secondary content will be.'),
  );
  $form['linked_list'] = array(
    '#type' => 'select',
    '#title' => t('List Icon'),
    '#options' => array(
      'none' => t('None'),
      'doc-icon' => t('Doc Icon'),
      'arrow' => t('Arrow'),
    ),
    '#default_value' => (isset($style_settings['linked_list'])) ? $style_settings['linked_list'] : FALSE,
    '#description' => t('Add icon to the list'),
    '#states' => array(
      'invisible' => array(
        ':input[name="settings[secondary_options]"]' => array('value' => 'panel-primary'),
      ),
    ),
  );

  return $form;
}
