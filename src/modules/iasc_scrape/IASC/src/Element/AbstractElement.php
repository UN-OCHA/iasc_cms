<?php

namespace IASC\Element;

use IASC\Listing\AbstractListing;

/**
 * Basic element class that can be extended.
 */
abstract class AbstractElement implements ElementInterface {
  protected $listing;
  protected $position;
  protected $page;
  protected $values;

  /**
   * Click through the listing page.
   */
  public function goThroughListingPage(AbstractListing $listing, $name, $table_id) {
    $this->listing = $listing;
    $this->listing->clickListingPage($name);
    if ($this->page != 1) {
      $this->listing->clickListingPager($table_id, $this->page);
    }
    $this->listing->clickEditLink($this->position);
  }

  /**
   * Get the values to crawl.
   */
  public function getValues() {
    $output = array();
    foreach ($this->values as $key => $value) {
      $output[$key] = $this->getDOMValue($value);
    }

    return $output;
  }

  /**
   * Grabs the desired string value from the DOM element.
   */
  public function getDOMValue($params) {
    // If get_text is set to TRUE, then we should use the text of the element
    // instead of the attribute.
    if (!empty($params['get_text'])) {
      $value = $this->listing->crawler
        ->filter($params['selector'])
        ->text();
    }
    elseif (!empty($params['table_link'])) {
      // If table_link is TRUE, then find the link inside a table element.
      $value = $this->listing->crawler
        ->filter($params['selector'])
        ->filter('tr')->eq($params['tr'])
        ->filter('td')->eq($params['td'])
        ->selectLink('Edit')
        ->link();
    }
    else {
      // If the attribute isn't specified, then we assume that we need to grab
      // the string in the value attribute.
      $attr = !empty($params['attr']) ? $params['attr'] : 'value';
      $value = $this->listing->crawler
        ->filter($params['selector'])
        ->attr($attr);
    }

    return $value;
  }

  /**
   * Get the url.
   */
  public function getUrl() {
    return $this->listing->client->getHistory()->current()->getUri();
  }

  /**
   * Parse the url and regex the legacy id from the path.
   */
  public function getLegacyId($name) {
    preg_match("/(?=$name\=)?\d+/", $this->getUrl(), $id);
    return isset($id[0]) ? $id[0] : 0;
  }
}
