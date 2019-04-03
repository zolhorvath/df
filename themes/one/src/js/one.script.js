import 'popper.js';
import 'bootstrap';

(function ($, Drupal, window) {
  'use strict';

  Drupal.behaviors.navbarHeight = {
    attach: function attach(context, settings) {

      // Make sure the header has the correct height.
      function navbarHeight() {
        if (width.matches) {
          // Find tallest item and set the value to equalHeights
          var equalHeights = Math.max($('.navbar .navbar-brand').height(), +
            $('.navbar .navbar-collapse').height(), +
            $('.navbar .navbar-right').height());

          // Set each div to equalHeights.
          // I'm not sure why I need to subtrack on navbar-brand and navbar-right.
          $('.navbar .navbar-brand').height(equalHeights - 10);
          $('.navbar .navbar-collapse').height(equalHeights);
          $('.navbar .navbar-right').height(equalHeights - 16);
        } else {
          // Remove height
          $('.navbar .navbar-brand').height('');
          $('.navbar .navbar-collapse').height('');
          $('.navbar .navbar-right').height('');
        }
      }
      // Only apply equalHeights on min-width of 992px
      var width = window.matchMedia("(min-width: 992px)");
      navbarHeight(width);
      width.addListener(navbarHeight);
    }
  };

})(jQuery, Drupal, window);
