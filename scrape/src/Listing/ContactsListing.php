<?php

namespace IASC\Listing;

use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class ContactsListing implements ListingInterface
{
  public $crawler;
  public $client;

  public function __construct(Client &$client, Crawler &$crawler) {
    $this->client = $client;
    $this->crawler = $crawler;
  }

  /**
   * @inheritdoc
   */
  public function clickListingPage() {
    $link = $this->crawler->selectLink('Contacts')->link();
    // Click to follow link
    $this->crawler = $this->client->click($link);
  }

  public function getListingUrl() {
    $uri = $this->client->getHistory()->current()->getUri();
    return $uri;
  }

  public function clickEditLink($position = 1) {
    $link = $this->crawler
      ->filter('#ctl00_ContentPlaceHolder1_ctl00_gvcontactslist')
      ->filter('tr')->eq($position)
      ->filter('td')->eq(7)
      ->selectLink('Edit')
      ->link();

    $this->crawler = $this->client->click($link);
  }
}