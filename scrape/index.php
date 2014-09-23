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

$contactListing = new IASC\Listing\ContactsListing($client, $crawler);
$contactListing->clickListingPage();

$contactListing->clickEditLink();
$crawler = $contactListing->crawler;
echo $crawler->html();