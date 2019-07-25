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
      // Attaches a function to the Unsplash Image ID field for our show/hide.
      unsplash.blur(function() {
        if ( $(this).val() ) {
          imageHide();
          loadUnsplashPreview();
        }
        else {
          imageShow();
          removeUnsplashPreview();
        }
      });
      // On load, check for Unsplash value and hide the image.
      if ( unsplash.val() ) {
        imageHide();
        loadUnsplashPreview();
      }
    }
  };
  // Hit the source.unsplash.com api and produce an image preview.
  function loadUnsplashPreview() {
    removeUnsplashPreview();
    unsplash.after('<p class="unsplash-image-preview"><img src="http://source.unsplash.com/' + unsplash.val() + '" width="300"/><p>');
  }
  // Removes the unsplash image preview from the DOM.
  function removeUnsplashPreview() {
    $('.unsplash-image-preview').remove();
  }
  // Removes the image file field because it gets overridden by Unsplash on entity pre-save.
  function imageHide() {
    imageShow();
    image.hide();
    unsplash.after('<sub class="unsplash-image-note">Note: Image uploading and editing is disabled if an Unsplash Image ID is present. Remove the Unsplash Image ID to set the Focal point.</sub>');
  }
  // Returns the image file field when Unsplash is not being used.
  function imageShow() {
    image.show();
    $('.unsplash-image-note').remove();
  }
}(jQuery, Drupal));
