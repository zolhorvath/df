/**
 * @file
 * Generic functions for all our Foundation Scenarios
 *
 */
(function ($, Drupal) {

  // Add the active class to the first available Foundation tab.
  //set active class for tabs for whatever is returned by views
  $(document).ready(function() {
    function openTab() {
      var FoundationTabA = $('.tabs li a');
      var FoundationFirstTabA = $('.tabs').find('li a').first();
      var FoundationFirstTabPanel = $('.tabs-panel').first();
      var origHash = window.location.hash;
      if (origHash) {
        var TabURL = '#' + window.location.hash.substr(1);
      };
      if (typeof TabURL !== 'undefined') {
        FoundationTabA.each(function(e) {
          var hash = $(this).attr('href');
          if (hash == TabURL) {
            $(this).click();
            $('html, body').animate({
              scrollTop: $('.tabs-title a').offset().top
            }, 2000);
            return false;
          }
        });
      } else {
        // open the first tab by default
        FoundationFirstTabA.click();
        FoundationFirstTabPanel.addClass('is-active');
      }
    }
    $(window).bind('hashchange', function() {
      openTab();
    });

    openTab();
  });


})(jQuery, Drupal);
