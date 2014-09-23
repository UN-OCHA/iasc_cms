<?php

namespace IASC\Element;

use IASC\Listing\AbstractListing;

interface ElementInterface
{
  /**
   * Load and go through the listing page for the element
   */
  public function goThroughListingPage(AbstractListing $listing);

  /**
   * Set the element values
   */
  public function setValues();

  /**
   * Get the element values
   */
  public function getValues();
}