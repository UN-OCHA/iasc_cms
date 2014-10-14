/**
 * @file
 * Custom scripts for theme.
 */
(function ($) {
  Drupal.behaviors.rock_theme = {
    attach: function (context, settings) {
      
    // Search Form Expand on Hover
    $('.navbar-form .search-query').hover(function(){
      $(this).addClass('grow');
    },function(){
      if(!$(this).is(":focus")) {
        $(this).removeClass('grow');
      }
    });

    $('.navbar-form .search-query').focusout(function(){
      $(this).removeClass('grow');
    })






    }
  };
})(jQuery);
