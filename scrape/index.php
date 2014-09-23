<?php
/**
 * @file
 * IASC Scraper
 */

require 'vendor/autoload.php';

// Initially set credential values
$username = $password = '';

// Grab custom login credentials if set
if (file_exists('creds.php')) {
  include_once 'creds.php';
}

$login = new IASC\Login($username, $password);

$crawler = $login->crawler;
$client = $login->client;

$contact= new IASC\Element\ContactElement($client, $crawler);
print_r($contact->getValues());