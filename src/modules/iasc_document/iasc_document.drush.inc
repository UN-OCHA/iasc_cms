<?php
/**
 * @file
 * Drush commands for IASC Document module.
 */

/**
 * Implements hook_drush_command().
 */
function iasc_document_drush_command() {
  $items = array();

  $items['iasc-document-save-file'] = array(
    'description' => 'Saves an existing file to Drupal file system',
    'arguments' => array(
      'legacy_id' => 'The legacy_id of the file',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_document_save_file',
    'aliases' => array('iasc-doc-save'),
  );

  return $items;
}

/**
 * Callback to execute 'drush iasc-document-save-file'.
 */
function drush_iasc_document_save_file($legacy_id) {
  iasc_document_save_file($legacy_id);
}
