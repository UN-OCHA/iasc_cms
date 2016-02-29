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

      $('.dropdown').removeOnce('radix-dropdown');
      $('.navbar-nav .dropdown').once('radix-dropdown', function(){
        var dropdown = this;

        function show() {
          if (!$(dropdown).hasClass('open')) {
            $('>[data-toggle="dropdown"]', dropdown).trigger('click.bs.dropdown');
            $(dropdown).addClass('open');
          }
        }

        function hide() {
          if ($(dropdown).hasClass('open')) {
            $('>[data-toggle="dropdown"]', dropdown).trigger('click.bs.dropdown');
            $(dropdown).removeClass('open');
          }
        }

        $(this).on('mouseenter.radix.dropdown', function(e) {
          show();
        });
        $(this).on('mouseleave.radix.dropdown', function() {
          hide();
        });
        $(this).on('focusin.radix.dropdown', function() {
          show();
        });
      });

    }
  };
})(jQuery);
