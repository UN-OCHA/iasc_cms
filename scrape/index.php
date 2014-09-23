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

use Goutte\Client;

$sso = 'http://singleone.unocha.org/OCHASingleOne/pageloader.aspx?page=login&pubappid=IASCAdmin&redirect=http%3a%2f%2fwebapps.humanitarianinfo.org%2fIASCadmin%2fpageloader.aspx%3fpage%3d&processlogin=b2000_admin';

$client = new Client();
$crawler = $client->request('GET', $sso);

//select the form
$form = $crawler->selectButton('Login')->form();
//submit the form passing an array of values
$crawler = $client->submit($form,
  array(
    '_ctl3:TextEmail' => $username,
    '_ctl3:TextPassword' => $password,
  )
);

echo $crawler->html();