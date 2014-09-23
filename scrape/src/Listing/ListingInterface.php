<?php

namespace IASC\Listing;

interface ListingInterface
{
  /**
   * Go to the default main page for a listing
   */
  public function clickListingPage();

  /**
   * Get the current Url
   */
  public function getListingUrl();
}