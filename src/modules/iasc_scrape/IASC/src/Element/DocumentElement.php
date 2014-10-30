<?php
/**
 * @file
 * Scrape Document element.
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
      'og_group_ref' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlAuthBody option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'posted_date' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtPostedDate'),
      'field_linked_agendas' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_gvLinkedAgendas',
        'table_link' => TRUE,
        'link_text' => 'View Agenda',
        'tr' => 1,
        'td' => 1,
      ),
      'field_linked_meeting' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_gvLinkedAgendas',
        'table_link' => TRUE,
        'link_text' => 'View Meeting',
        'tr' => 1,
        'td' => 2,
      ),
      'file_id_pdf' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_hdnPDFID',
      ),
      'file_text_pdf' => array(
        'filename' => TRUE,
        'tr' => 1,
      ),
      'file_id_other' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_hdnOtherID',
      ),
      'file_text_other' => array(
        'filename' => TRUE,
        'tr' => 2,
      ),
      'field_legacy_publish' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlPublish option[selected="selected"]',
        'get_text' => TRUE,
      ),
    );
    $this->values = $values;
  }
}
