<?php

namespace IASC\Listing;

use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class ContactsListing extends AbstractListing
{
  public function __construct(Client $client, Crawler $crawler) {
    $this->client = $client;
    $this->crawler = $crawler;
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