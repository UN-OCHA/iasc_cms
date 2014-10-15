<?php
/**
 * @file
 * Drush commands for IASC Configuration module.
 */

/**
 * Implements hook_drush_command().
 */
function iasc_contact_drush_command() {
  $items = array();

  $items['iasc-import-contacts'] = array(
    'description' => 'Imports and creates contact nodes from a given csv file',
    'arguments' => array(
      'file' => 'The file containing the contact data',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_contact_iasc_import_contacts',
    'aliases' => array('iasc-contacts'),
    'options' => array(
      'delimiter'     => 'CSV delimiter (default: ",")',
      'enclosure'     => "CSV enclosure (default: '\"')",
      'delete-all'  => 'Delete all contacts before import',
    ),
    'examples' => array(
      'drush iasc-contacts <path>/data/contacts.csv --delimiter=";" --delete-all' => 'Import the contacts in contacts.csv using delimiter ";" and delete all contact nodes before importing.',
    ),
  );

  $items['iasc-update-orgs'] = array(
    'description' => 'Updates contact nodes with organisation references from a given csv file',
    'arguments' => array(
      'file' => 'The file containing the contact organisation membership data',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_contact_iasc_update_contact_orgs',
    'options' => array(
      'delimiter'     => 'CSV delimiter (default: ",")',
      'enclosure'     => "CSV enclosure (default: '\"')",
    ),
    'examples' => array(
      'drush iasc-update-orgs <path>/data/organisation_membership.csv --delimiter=";"' => 'Updates contacts in organisation_membership.csv using delimiter ";"',
    ),
  );

  $items['iasc-update-bodies'] = array(
    'description' => 'Updates contact nodes with authoring body references from a given csv file',
    'arguments' => array(
      'file' => 'The file containing the contact body membership data',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_LOGIN,
    'callback' => 'drush_iasc_contact_iasc_update_contact_bodies',
    'options' => array(
      'delimiter'     => 'CSV delimiter (default: ",")',
      'enclosure'     => "CSV enclosure (default: '\"')",
    ),
    'examples' => array(
      'drush iasc-update-bodies <path>/data/body_membership.csv --delimiter=";"' => 'Updates contacts in body_membership.csv using delimiter ";"',
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function iasc_contact_drush_help($section) {
  switch ($section) {
    case 'drush:iasc-import-contacts':
      return dt('Import contacts with a CSV file.');
    case 'drush:iasc-update-orgs':
      return dt('Update contacts with organisation references from a CSV file.');
    case 'drush:iasc-update-bodies':
      return dt('Import contacts with body references from a CSV file.');
  }
}

/**
 * Callback to execute 'drush iasc-import-contacts'.
 */
function drush_iasc_contact_iasc_import_contacts($file = '') {
  iasc_contact_batch_import('contacts', $file);
}

/**
 * Callback to execute 'drush iasc-update-contacts'.
 */
function drush_iasc_contact_iasc_update_contact_orgs($file = '') {
  iasc_contact_batch_import('orgs', $file);
}

/**
 * Callback to execute 'drush iasc-update-contacts'.
 */
function drush_iasc_contact_iasc_update_contact_bodies($file = '') {
  iasc_contact_batch_import('bodies', $file);
}

function iasc_contact_batch_import($type, $file) {
  // Start process.
  drush_print('Checking options...');

  // If we don't have the files, then don't continue.
  if (empty($file) || !file_exists($file)) {
    drush_set_error('Missing csv file', dt('You need to set the correct path to the file to import.'));
    return;
  }

  // Set required options.
  $options = array();
  $options['type'] = $type;
  $options['file'] = $file;

  // Set additional options.
  $delimiter = drush_get_option('delimiter');
  $options['delimiter'] = ($delimiter == NULL) ? ',' : $delimiter;

  $enclosure = drush_get_option('enclosure');
  $options['enclosure'] = ($enclosure == NULL) ? '"' : $enclosure;

  // Login as the admin user.
  global $user;
  $user = user_load(1);

  // Setup our batch process.
  if ('contacts' == $type) {
    $options['delete_all'] = (drush_get_option('delete-all') == NULL) ? FALSE : TRUE;
  }

  $messages = iasc_contact_import($options);
  if (count($messages)) {
    foreach ($messages as $message) {
      $msg = str_replace('<br />', " \n", $message);
      drush_log('- ' . $msg, 'error');
    }
    return;
  }

  // Process the batch.
  drush_print('Starting import process. Please wait...');
  $batch =& batch_get();
  $batch['progressive'] = FALSE;
  drush_backend_batch_process();

  drush_print('Finished importing!');
}


