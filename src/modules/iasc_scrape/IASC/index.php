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

for ($i = 1; $i < 5; $i++) {
  $contact = new IASC\Element\ContactElement($client, $crawler, $i);
  print_r($contact->getValues());

}

echo '<br /><br />-----------<br /><br />';

$document = new IASC\Element\DocumentElement($client, $crawler);
print_r($document->getValues());

echo '<br /><br />-----------<br /><br />';

$news = new IASC\Element\NewsElement($client, $crawler);
print_r($news->getValues());