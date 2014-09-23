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

  public function getDOMValue($id) {
    $value = $this->listing->crawler
      ->filter($id)
      ->attr('value');

    return $value;
  }
}
