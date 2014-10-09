<?php
/**
 * @file
 * Scrape Meeting element.
 */

namespace IASC\Element;

use IASC\Listing\MeetingListing;
use Goutte\Client;
use Symfony\Component\DomCrawler\Crawler;

class MeetingElement extends AbstractElement {
  /**
   * Constructor.
   */
  public function __construct(Client $client, Crawler $crawler, $page = 1, $position = 1) {
    $this->position = $position;
    $this->page = $page;
    // The table id needed to use the pager. Not the id of the table element.
    $table_id = 'ctl00$ContentPlaceHolder1$ctl00$gvmeetings';
    $link_name = 'Meetings';
    $listing = new MeetingListing($client, $crawler);
    $this->goThroughListingPage($listing, $link_name, $table_id);
    $this->setValues();
  }

  /**
   * Set the values from HTML.
   */
  public function setValues() {
    $values = array(
      'field_authoring_bodies' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlBody option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'title' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtTitle'),
      'field_oa_start_date' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtStartDate'),
      'field_oa_end_date' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtEndDate'),
      'field_oa_start_time_hour' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlStartTime1 option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_oa_start_time_min' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlStartTime2 option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_oa_end_time_hour' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlEndTime1 option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_oa_end_time_min' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlStartTime2 option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_time_zone' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlEndTime2 option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_oa_address' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtCity'),
      'field_host' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlhost option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'body' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtpublic',
        'get_text' => TRUE,
      ),
      'field_info_private' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_txtprivate',
        'get_text' => TRUE,
      ),
      'og_group_ref' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_ddlpublev2 option[selected="selected"]',
        'get_text' => TRUE,
      ),
      'field_contact' => array('selector' => '#ctl00_ContentPlaceHolder1_ctl00_SearchContacts1_hdnContactId'),
      'field_meeting_agendas' => array(
        'selector' => '#ctl00_ContentPlaceHolder1_ctl00_gvAgendas',
        'table_link' => TRUE,
        'tr' => 1,
        'td' => 5,
      ),
    );
    $this->values = $values;
  }
}
