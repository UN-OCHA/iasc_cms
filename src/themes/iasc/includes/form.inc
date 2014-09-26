<?php
/**
 * @file
 * Theme and preprocess functions for forms
 */

/**
 * Implements hook_form_alter().
 */
function iasc_form_alter(&$form, &$form_state, $form_id) {
  if($form_id == 'search_form') {
    //$form['basic']['submit']['#type'] = 'button';
    $form['actions']['submit']['#value'] = '<i class="glyphicon glyphicon-search"></i>'; // Change the text on the submit
  }
}
