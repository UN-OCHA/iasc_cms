<?php

namespace IASC\Element;

use IASC\Listing\ContactsListing;
use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class ContactElement extends AbstractElement
{
  public function __construct(Client $client, Crawler $crawler, $position = 1) {
    $this->position = $position;
    $listing = new ContactsListing($client, $crawler);
    $this->goThroughListingPage($listing);
    $this->setValues();
  }

  public function setValues() {
    $values = array(
      'homepage' => '#ctl00_ContentPlaceHolder1_ctl00_txtHomepage',
      'city' => '#ctl00_ContentPlaceHolder1_ctl00_txtCity',
      'country' => '#ctl00_ContentPlaceHolder1_ctl00_txtCountry',
    );
    $this->values = $values;
  }
}