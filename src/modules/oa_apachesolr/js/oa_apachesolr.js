(function($) {

  Drupal.behaviors.oa_toolbar_search = {
    attach: function(context, settings) {
      var $form = $('.oa-apachesolr-search-form-toolbar', context);
      var $search_bar = $form.find('.search-text');
      var $dropdown = $form.find('.dropdown-menu');

      if ($form.length) {
        $form.submit(function(evt) {
          var term = $search_bar.val();
          var type = $dropdown.find('input:checked').val();
          evt.preventDefault();
          window.location = determineSearchPath(term, type, settings.oa_apachesolr.space_id);
        });

        $dropdown.click(function(e) {
          e.stopPropagation();
        });
      }
    }
  };

  Drupal.behaviors.oa_sidebar_search = {
    attach: function(context, settings) {
      $('.oa-apachesolr-search-form-sidebar', context).each(function( index ) {
        var $form = $(this);
        var $search_bar = $form.find('.search-text');
        var $options = $form.find('.options');
        var $spaces = $form.find('.form-item-space-select');
        if ($form.length) {
          $form.submit(function(evt) {
            var term = $search_bar.val();
            var type = $options.find('input:checked').val();
            evt.preventDefault();
            window.location = determineSearchPath(term, type, settings.oa_apachesolr.space_id);
          });
        }
      });
    }
  };

  function determineSearchPath(term, type, space_id) {
    var path = Drupal.settings.basePath + 'search' + '/';
    if (type === 'users') {
      path += 'users/' + term;
    }
    else {
      path += 'node/' + term;
      if (type === 'this_space') {
        path += '?f[0]=' + encodeURIComponent('sm_og_group_ref:node:' + space_id);
      }
    }
    return path;
  }

})(jQuery);
