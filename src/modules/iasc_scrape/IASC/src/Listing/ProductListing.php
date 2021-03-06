<?php
/**
 * @file
 * Product listing crawler class.
 */

namespace IASC\Listing;

use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class ProductListing extends AbstractListing {
  /**
   * Constructor.
   */
  public function __construct(Client $client, Crawler $crawler) {
    $this->client = $client;
    $this->crawler = $crawler;
  }

  /**
   * The edit link.
   */
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
