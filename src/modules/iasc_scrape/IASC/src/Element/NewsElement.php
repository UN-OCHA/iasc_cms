<?php

namespace IASC\Element;

use Goutte\Client;
use IASC\Listing\NewsListing;
use Symfony\Component\DomCrawler\Crawler;

class NewsElement extends AbstractElement
{
  public function __construct(Client $client, Crawler $crawler, $position = 1) {
    $this->position = $position;
    $listing = new NewsListing($client, $crawler);
    $this->goThroughListingPage($listing);
    $this->setValues();
  }

  public function setValues() {
    $values = array(
      'header' => '#ctl00_ContentPlaceHolder1_ctl00_txtHeader',
    );
    $this->values = $values;
  }
}