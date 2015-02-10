<?php
/**
 * @file
 * Theme and preprocess functions for forms
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function iasc_form_search_form_alter(&$form, &$form_state, $form_id) {
  $form['basic']['submit']['#prefix'] = '<div class="submit-container"><span class="icons-search"></span>';
  $form['basic']['submit']['#suffix'] = '</div>';
}

/**
 * Implements theme_file_managed_file().
 */
function iasc_file_managed_file($vars) {
  $element = $vars['element'];

  $attributes = array();
  if (isset($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  if (!empty($element['#attributes']['class'])) {
    $attributes['class'] = (array) $element['#attributes']['class'];
  }
  $attributes['class'][] = 'form-managed-file input-group';

  // Add wrapper to submit button.
  $element['upload_button']['#prefix'] = '<div class="input-group-btn">';
  $element['upload_button']['#suffix'] = '</div>';

  // This wrapper is required to apply JS behaviors and CSS styling.
  $output = '';
  $output .= '<div' . drupal_attributes($attributes) . '>';
  $output .= drupal_render_children($element);
  $output .= '</div>';
  return $output;
}

/**
 * Implements theme_file().
 */
function iasc_file(&$vars) {
  $element = $vars['element'];
  $element['#attributes']['type'] = 'file';
  element_set_attributes($element, array('id', 'name', 'size'));
  _form_set_class($element, array('form-file form-control'));

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}
