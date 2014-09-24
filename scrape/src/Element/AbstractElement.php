<?php

namespace IASC\Element;

use IASC\Listing\AbstractListing;

/**
 * Basic element class that can be extended.
 */
abstract class AbstractElement implements ElementInterface
{
  protected $listing;
  protected $position;
  protected $values;

  public function goThroughListingPage(AbstractListing $listing) {
    $this->listing = $listing;
    $this->listing->clickListingPage();
    $this->listing->clickEditLink($this->position);
  }

  public function setValues() {}

  public function getValues() {
    $output = array();
    foreach ($this->values as $key => $value) {
      $output[$key] = $this->getDOMValue($value);
    }

    return $output;
  }

  /**
   * Grabs the desired string value from the DOM element.
   *
   * @param $params
   *  An array that describes what we want to grab from the DOM element.
   * @return string
   *  The desired string value from the dom
   */
  public function getDOMValue($params) {
    // If get_text is set to TRUE, then we should use the text of the element
    // instead of the attribute
    if (!empty($params['get_text'])) {
      $value = $this->listing->crawler
        ->filter($params['selector'])
        ->text();
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
}
