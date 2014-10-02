<?php

namespace IASC\Listing;

use Symfony\Component\DomCrawler\Field\InputFormField;

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
    $form = $this->crawler
      ->filter('#aspnetForm')
      ->form();

    $domdocument = new \DOMDocument();
    $ff = $domdocument->createElement('input');
    $ff->setAttribute('name', '__EVENTTARGET');
    $ff->setAttribute('value', $table_id);
    $formfield = new InputFormField($ff);

    $ff = $domdocument->createElement('input');
    $ff->setAttribute('name', '__EVENTARGUMENT');
    $ff->setAttribute('value', 'Page$' . $pager);
    $formfield2 = new InputFormField($ff);

    $form->set($formfield);
    $form->set($formfield2);

    $this->crawler = $this->client->submit($form);
  }
}