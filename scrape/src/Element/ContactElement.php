<?php

namespace IASC\Element;

use IASC\Listing\ContactsListing;
use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class ContactElement implements ElementInterface
{
  protected $listing;

  public function __construct(Client $client, Crawler $crawler, $position = 1) {
    $this->position = $position;
    $this->listing = new ContactsListing($client, $crawler);
    $this->goThroughListingPage();
  }

  public function goThroughListingPage() {
    $this->listing->clickListingPage();
    $this->listing->clickEditLink($this->position);
  }

  public function getValue($id) {
    $value = $this->listing->crawler
      ->filter($id)
      ->attr('value');

    return $value;
  }

  public function getValues() {
    $output = array();
    $values = array(
      'homepage' => '#ctl00_ContentPlaceHolder1_ctl00_txtHomepage',
      'city' => '#ctl00_ContentPlaceHolder1_ctl00_txtCity',
      'country' => '#ctl00_ContentPlaceHolder1_ctl00_txtCountry',
    );
    foreach ($values as $key => $value) {
      $output[$key] = $this->getValue($value);
    }

    return $output;
  }
}