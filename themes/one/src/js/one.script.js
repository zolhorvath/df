import 'popper.js';
import 'bootstrap';
import '@fortawesome/fontawesome-free/js/all';

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

  Drupal.behaviors.layoutBuilderModal = {
    attach: function attach(context, settings) {
      var lbm = $('#layout-builder-modal');
      var lbmTextInputs = $('#layout-builder-modal input[type="text"]');
      // Add active class to label so we can change it's position.
      lbmTextInputs.parent().addClass('input-field');
      lbmTextInputs.focus(function() {
        $(this).parent().find("label").addClass("active");
      });
      lbmTextInputs.focusout(function() {
        if (!$(this).val()){
          $( this ).parent().find( "label").removeClass("active");
        }
      });
      lbmTextInputs.each(function(){
        if ($(this).val()){
          $(this).parent().find("label").addClass("active");
        }
      });

      $(document).ready(function () {
        // Close modal if clicked outside.
        if (lbm.dialog('isOpen') === true) {
          $('.ui-widget-overlay').bind('click', function () {
            lbm.dialog('close');
          })
        }

        $(window).once('layoutBuilderModal').on('dialog:aftercreate', function () {
          if (lbm.length) {
            lbm.dialog({
              draggable: true,
            });
            lbm.parent().addClass('lbm').css('z-index','1201');
          }
        });
      });
    }
  };

})(jQuery, Drupal, window);
