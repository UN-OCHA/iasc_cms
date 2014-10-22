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

  $items['iasc-document-connect-file'] = array(
    'description' => 'Connect an existing file to Drupal file system',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_document_connect_file',
    'aliases' => array('iasc-doc-connect'),
  );

  return $items;
}

/**
 * Callback to execute 'drush iasc-document-connect-file'.
 */
function drush_iasc_document_connect_file() {
  iasc_document_connect_file();
}
