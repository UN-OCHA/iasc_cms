<?php
/**
 * @file
 * Scrape Meeting element.
 */

namespace IASC\Element;

use IASC\Listing\NewsListing;
use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class NewsElement extends AbstractElement {
  /**
   * Constructor.
   */
  public function __construct(Client $client, Crawler $crawler, $page = 1, $position = 1) {
    $this->position = $position;
    $this->page = $page;
    // The table id needed to use the pager. Not the id of the table element.
    $table_id = 'ctl00$ContentPlaceHolder1$ctl00$gvnews';
    $link_name = 'News';
    $listing = new NewsListing($client, $crawler);
    $this->goThroughListingPage($listing, $link_name, $table_id);
    $this->setValues();
  }

  /**
   * Set the values from HTML.
   */
  public function setValues() {
    $values = array(
      'og_group_ref' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlBody option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'title' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtHeader'),
      'field_published_date' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtDate'),
      'show_on_home' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_rbFrontpage_1 input[checked="checked"]',
      ),
      'field_contact' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_SearchContacts1_hdnContactId'),
      'intro' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtIntro',
        'get_text' => TRUE,
      ),
      'intro_link' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtIntroLink',
        'get_text' => TRUE,
      ),
      'body' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtNews',
        'get_text' => TRUE,
      ),
      'field_legacy_publish' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlPublish option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_links' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_gvnewslinks',
        'table_text' => TRUE,
      ),
    );
    $this->values = $values;
  }
}
