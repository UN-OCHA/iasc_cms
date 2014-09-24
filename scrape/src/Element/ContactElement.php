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
      'first_name' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtFirst'),
      'last_name' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtLast'),
      'homepage' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtHomepage'),
      'city' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtCity'),
      'country' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtCountry'),
      'organization_id' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlOrganisation option[selected="selected"]'),
      'organization_name' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlOrganisation option[selected="selected"]',
        'get_text' => TRUE
      ),
    );
    $this->values = $values;
  }
}