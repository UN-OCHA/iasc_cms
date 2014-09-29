<?php

namespace IASC\Listing;

/**
 * Basic listing class that can be extended.
 */
abstract class AbstractListing implements ListingInterface
{
  public $crawler;
  public $client;

  public function getListingUrl() {
    $uri = $this->client->getHistory()->current()->getUri();
    return $uri;
  }
}