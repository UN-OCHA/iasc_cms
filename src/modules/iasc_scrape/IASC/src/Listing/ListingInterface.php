<?php

namespace IASC\Listing;

interface ListingInterface
{
  /**
   * Go to the default main page for a listing.
   */
  public function clickListingPage($name);

  /**
   * Go to the listing page.
   */
  public function clickListingPager($table_id, $page);

  /**
   * Get the current Url.
   */
  public function getListingUrl();

  /**
   * Go to the edit link for the detail page.
   */
  public function clickEditLink($position = 1);
}