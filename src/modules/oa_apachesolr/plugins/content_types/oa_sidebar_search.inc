<?php
/**
 * @file
 * Pane for putting search in the sidebar.
 */

$plugin = array(
  'title' => t('Sidebar Search'),
  'description' => t('Provides a search bar for the sidebar, with the ability to preview results.'),
  'single' => TRUE,
  'category' => array(t('Search'), -9),
  'edit form' => 'oa_apachesolr_sidebar_search_settings_form',
  'render callback' => 'oa_apachesolr_sidebar_search_pane_render',
  'defaults' => array(
    'allowed_options' => array(),
    'taxonomy_terms' => array(),
    'select_title' => '',
  ),
);

/**
 * Renders the widget.
 */
function oa_apachesolr_sidebar_search_pane_render($subtype, $conf, $args, $context) {
  $allowed_options = array_keys(array_filter($conf['allowed_options']));

  $block = new stdClass();
  $block->title = t('Search');
  $block->content = drupal_get_form('oa_apachesolr_search_form', 'sidebar', $allowed_options);
  
  return $block;
}

/**
 * Provides the form for the widget.
 */
function oa_apachesolr_sidebar_search_settings_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $options = array(
    'all_spaces' => t('All spaces'),
    'this_space' => t('This space'),
    'users' => t('Users'),
  );
  $form['allowed_options'] = array(
    '#title' => t('Allowed options'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => (!empty($conf['allowed_options'])) ? $conf['allowed_options'] : array_keys($options),
    '#description' => t('Select which search options you would like to enable.'),
    '#required' => TRUE,
  );

  return $form;
}

/**
 * Saves changes to the widget.
 */
function oa_apachesolr_sidebar_search_settings_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['values']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
