<?php
/**
 * @file
 * Scrape Product element.
 */

namespace IASC\Element;

use IASC\Listing\ProductListing;
use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class ProductElement extends AbstractElement {
  /**
   * Constructor.
   */
  public function __construct(Client $client, Crawler $crawler, $page = 1, $position = 1) {
    $this->position = $position;
    $this->page = $page;
    // The table id needed to use the pager. Not the id of the table element.
    $table_id = 'ctl00$ContentPlaceHolder1$ctl00$gvdocs';
    $link_name = 'Products';
    $listing = new ProductListing($client, $crawler);
    $this->goThroughListingPage($listing, $link_name, $table_id);
    $this->setValues();
  }

  /**
   * Set the values from HTML.
   */
  public function setValues() {
    $values = array(
      'title' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtTitle'),
      'og_group_ref' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlBody option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_category' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlProdCat option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'posted_date' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtDate'),
      'file_id_pdf' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_hdnPDFID',
      ),
      'file_text_pdf' => array(
        'filename' => TRUE,
        'tr' => 1,
      ),
      'field_legacy_publish' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlPublish option[selected="selected"]',
        'get_text' => TRUE,
      ),
    );
    $this->values = $values;
  }
}
