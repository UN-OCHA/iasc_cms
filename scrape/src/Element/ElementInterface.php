<?php

namespace IASC\Element;

interface ElementInterface
{
  /**
   * Load and go through the listing page for the element
   */
  public function goThroughListingPage();

  /**
   * Get the element values
   */
  public function getValues();
}