/**
 * @file df_tools_gallery.view.js
 */
(function ($, Drupal) {

  "use strict";

  /**
   * Registers behaviours related to view widget.
   */

  Drupal.behaviors.DFToolsGalleryView = {
    attach: function (context) {
      var container = $('.df-masonry-gallery');
      container.imagesLoaded(function() {
        container.masonry({
          columnWidth: 220,
          itemSelector: '.df-masonry-gallery > .field-items > .field-item'
        });
      });
    }
  };

}(jQuery, Drupal));
