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

  public function clickListingPage($name) {
    $link = $this->crawler->selectLink($name)->link();
    // Click to follow link.
    $this->crawler = $this->client->click($link);
  }

  public function clickListingPager($table_id, $pager) {
    $link = $this->crawler
      ->filter($table_id)
      ->filter('tr')->eq(21)
      ->filter('td')->eq(0)
      ->filter('table')->eq(0)
      ->filter('tr')->eq(0)
      ->filter('td')->eq($pager - 1)
      ->selectLink($pager)
      ->link();

    $this->crawler = $this->client->click($link);
  }

  public function goBack() {
    $this->client->back();
  }
}