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
          var equalHeights = Math.max($('.page__navbar .navbar-brand').height(), +
            $('.page__navbar .navbar-collapse').height(), +
            $('.page__navbar .navbar-right').height());

          // Set each div to equalHeights.
          // I'm not sure why I need to subtrack on navbar-brand and navbar-right.
          $('.page__navbar .navbar-brand').height(equalHeights - 10);
          $('.page__navbar .navbar-collapse').height(equalHeights);
          $('.page__navbar .navbar-right').height(equalHeights - 16);
        } else {
          // Remove height
          $('.page__navbar .navbar-brand').height('');
          $('.page__navbar .navbar-collapse').height('');
          $('.page__navbar .navbar-right').height('');
        }
      }
      // Only apply equalHeights on min-width of 992px
      var width = window.matchMedia("(min-width: 992px)");
      navbarHeight(width);
      width.addListener(navbarHeight);
    }
  };

})(jQuery, Drupal, window);
