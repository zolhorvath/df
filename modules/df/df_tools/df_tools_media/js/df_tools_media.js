/**
 * @file df_tools_media.js
 * Adds some UX improvements for working with Unsplash on Media Image entities.
 */
(function ($, Drupal) {
  "use strict";
  // Finds expected fields that come via turning this module on.
  var unsplash = $('.field--name-field-unsplash-image-id input');
  var image = $('.field--name-image');
  // Standard behaviors fire on page load once.
  Drupal.behaviors.DFToolsMediaUnsplashFields = {
    attach: function (context) {
      // Initial setup for when user is editing existing media.
      image.after('<sub>Note: Image uploading is disabled when Unsplash Image ID is present.</sub>');
      // Attaches a function to the Unsplash Image ID field for our show/hide.
      unsplash.blur(function() {
        if ( $(this).val() ) {
          image.hide();
          loadUnsplashPreview($(this).val());
        }
        else {
          image.show();
          removeUnsplashPreview();
        }
      });
      // On load, check for Unsplash value and slide the image out.
      if ( unsplash.val() ) {
        image.slideUp(900);
      }
    }
  };
  // Hit the source.unsplash.com api and produce an image preview.
  function loadUnsplashPreview(slug) {
    removeUnsplashPreview();
    unsplash.after('<p class="unsplash-image-preview"><img src="http://source.unsplash.com/' + slug + '" width="300"/><p>');
  }
  // Removes the unsplash image preview from the DOM.
  function removeUnsplashPreview() {
    $('.unsplash-image-preview').remove();
  }
}(jQuery, Drupal));
