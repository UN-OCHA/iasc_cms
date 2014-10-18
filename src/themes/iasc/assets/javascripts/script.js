/**
 * @file
 * Custom scripts for theme.
 */
(function ($) {
  Drupal.behaviors.iasc = {
    attach: function (context, settings) {

      // Search Form Expand on Hover
      $('.navbar-form').hover(function(){
        $(this).addClass('grow');
      },function(){
        if(!$('.navbar-form .search-query').is(":focus")) {
          $(this).removeClass('grow');
        }
      });

      $('.navbar-form .search-query').focusout(function(){
        $('.navbar-form').removeClass('grow');
      })
      
    }
  };
})(jQuery);
