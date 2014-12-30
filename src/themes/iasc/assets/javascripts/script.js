/**
 * @file
 * Custom scripts for theme.
 */
(function ($) {
  Drupal.behaviors.iasc = {
    attach: function (context, settings) {
      
      // Add a class to the element clicked on the main menu
      $('.navbar-nav a').click(function(){
        $('.navbar-nav a').removeClass('open');
        $(this).addClass('open');
      });

    }
  };
})(jQuery);
