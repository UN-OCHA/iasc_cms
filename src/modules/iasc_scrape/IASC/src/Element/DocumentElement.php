<?php

namespace IASC\Element;

use Goutte\Client;
use IASC\Listing\DocumentsListing;
use Symfony\Component\DomCrawler\Crawler;

class DocumentElement extends AbstractElement
{
  public function __construct(Client $client, Crawler $crawler, $position = 1) {
    $this->position = $position;
    $listing = new DocumentsListing($client, $crawler);
    $this->goThroughListingPage($listing);
    $this->setValues();
  }

  public function setValues() {
    $values = array(
      'title' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtTitle'),
      'doc no' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtDocNo'),
    );
    $this->values = $values;
  }
}