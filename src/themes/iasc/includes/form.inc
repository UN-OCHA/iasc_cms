<?php
/**
 * @file
 * Theme and preprocess functions for forms
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function iasc_form_search_form_alter(&$form, &$form_state, $form_id) {
  $form['#attributes']['class'][] = 'col-xs-6 col-sm-3';
  $form['basic']['submit']['#attributes']['class'][] = 'hidden';
}
