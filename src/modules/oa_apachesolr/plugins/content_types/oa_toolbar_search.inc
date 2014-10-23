<?php
/**
 * @file
 * Pane for putting search in the toolbar.
 */

$plugin = array(
  'title' => t('Toolbar Search'),
  'description' => t('Provides a search bar for the toolbar that provides OA-specific options.'),
  'single' => TRUE,
  'category' => array(t('Search'), -9),
  'edit form' => 'oa_apachesolr_toolbar_search_settings_form',
  'render callback' => 'oa_apachesolr_toolbar_search_pane_render',
);

/**
 * Provides the form for the widget.
 */
function oa_apachesolr_toolbar_search_settings_form($form, &$form_state) {
  return $form;
}

/**
 * Renders the widget.
 */
function oa_apachesolr_toolbar_search_pane_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = drupal_get_form('oa_apachesolr_search_form', 'toolbar');
  return $block;
}
