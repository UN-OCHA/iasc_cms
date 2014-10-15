<?php
/**
 * @file
 * Scrape Meeting element.
 */

namespace IASC\Element;

use IASC\Listing\DocumentListing;
use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class DocumentElement extends AbstractElement {
  /**
   * Constructor.
   */
  public function __construct(Client $client, Crawler $crawler, $page = 1, $position = 1) {
    $this->position = $position;
    $this->page = $page;
    // The table id needed to use the pager. Not the id of the table element.
    $table_id = 'ctl00$ContentPlaceHolder1$ctl00$gvdocs';
    $link_name = 'Documents';
    $listing = new DocumentListing($client, $crawler);
    $this->goThroughListingPage($listing, $link_name, $table_id);
    $this->setValues();
  }

  /**
   * Set the values from HTML.
   */
  public function setValues() {
    $values = array(
      'title' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtTitle'),
      'field_document_no' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtDocNo'),
      'field_authoring_bodies' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlAuthBody option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'posted_date' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtPostedDate'),
      'og_group_ref' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlPublish option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_contact' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_SearchContacts1_hdnContactId'),
      'field_linked_agendas' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_gvLinkedAgendas',
        'table_link' => TRUE,
        'tr' => 1,
        'td' => 1,
      ),
      'field_linked_meeting' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_gvLinkedAgendas',
        'table_link' => TRUE,
        'tr' => 1,
        'td' => 2,
      ),
    );
    $this->values = $values;
  }
}
