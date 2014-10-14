<?php
/**
 * @file
 * Theme and preprocess functions for forms
 */


function iasc_form_alter(&$form, &$form_state, $form_id) {
  //kpr($form);
}

/**
 * Implement hook_form_FORM_ID_alter()
 */
function iasc_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['actions']['submit']['#prefix'] = '<span class="input-group-btn">';
  $form['actions']['submit']['#suffix'] = '</span>';
}
