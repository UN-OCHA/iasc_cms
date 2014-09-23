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

  /**
   * Go to the edit link for the detail page
   *
   * @param int $position
   */
  public function clickEditLink($position = 1);
}