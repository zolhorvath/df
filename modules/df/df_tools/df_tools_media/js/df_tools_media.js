/**
 * @file df_tools_media.js
 */
(function ($, Drupal) {

  "use strict";

  /**
   * Adds some UX improvements for working with Unsplash on Media.
   */
  Drupal.behaviors.DFToolsMediaUnsplashFields = {
    attach: function (context) {
      // Finds expected fields that come via turning this module on.
      var unsplash = $('.field--name-field-unsplash-image-id input');
      var image = $('.field--name-image');
      unsplash.blur(function() {
        if ( $(this).val() ) {
          image.hide();
        }
        else {
          image.show();
        }
      });
      // Setup for when editing.
      image.after('<sub>Note: Image uploading is disabled when Unsplash image ID is present.</sub>');
      // Slide the image out to prevent too much FOUT.
      if ( unsplash.val() ) {
        image.slideUp(900);
      }
    }
  };

}(jQuery, Drupal));
