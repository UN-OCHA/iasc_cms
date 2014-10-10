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
      'contact_file' => 'The file containing the contact data',
      'body_file' => 'The file containing the contact body membership data',
      'org_file' => 'The file containing the contact organisation membership data',
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
      'drush iasc-contacts <path>/data/contacts.csv <path>/data/body_membership.csv <path>/data/organisation_membership.csv --delimiter=";" --delete-all' => 'Import the contacts in contacts.csv, body_membership.csv, organisation_membership.csv using delimiter ";" and delete all contact nodes before importing.',
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
  }
}

/**
 * Callback to execute 'drush iasc-import-contacts'.
 */
function drush_iasc_contact_iasc_import_contacts($contact_file = '', $body_file = '', $org_file = '') {
  // Start process.
  drush_print('Checking options...');

  // If we don't have the files, then don't continue.
  if (empty($contact_file) || !file_exists($contact_file)) {
    drush_set_error('Missing contact csv file', dt('You need to set the correct path to the file to import.'));
    return;
  }

  if (empty($body_file) || !file_exists($body_file)) {
    drush_set_error('Missing contact-body membership csv file', dt('You need to set the correct path to the file to import.'));
    return;
  }

  if (empty($org_file) || !file_exists($org_file)) {
    drush_set_error('Missing contact-organisation membership csv file', dt('You need to set the correct path to the file to import.'));
    return;
  }

  // Set required options.
  $options = array();
  $options['contact_file'] = $contact_file;
  $options['body_file'] = $body_file;
  $options['org_file'] = $org_file;

  // Set additional options.
  $delimiter = drush_get_option('delimiter');
  $options['delimiter'] = ($delimiter == NULL) ? ',' : $delimiter;

  $enclosure = drush_get_option('enclosure');
  $options['enclosure'] = ($enclosure == NULL) ? '"' : $enclosure;

  $options['delete_all'] = (drush_get_option('delete-all') == NULL) ? FALSE : TRUE;

  // Login as the admin user.
  global $user;
  $user = user_load(1);

  // Setup our batch process.
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
