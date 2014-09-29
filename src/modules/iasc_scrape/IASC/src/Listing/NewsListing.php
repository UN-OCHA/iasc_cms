<?php

namespace IASC\Listing;

use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class NewsListing extends AbstractListing
{
  public function __construct(Client $client, Crawler $crawler) {
    $this->client = $client;
    $this->crawler = $crawler;
  }

  /**
   * @inheritdoc
   */
  public function clickListingPage() {
    $link = $this->crawler->selectLink('News')->link();
    // Click to follow link
    $this->crawler = $this->client->click($link);
  }

  public function clickEditLink($position = 1) {
    $link = $this->crawler
      ->filter('#ctl00_ContentPlaceHolder1_ctl00_gvnews')
      ->filter('tr')->eq($position)
      ->filter('td')->eq(4)
      ->selectLink('Edit')
      ->link();

    $this->crawler = $this->client->click($link);
  }
}