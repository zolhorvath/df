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
      $('.df-masonry-gallery').masonry({
        columnWidth: 320,
        itemSelector: '.field-item'
      }).imagesLoaded(function() {
        $('.df-masonry-gallery').masonry('reload');
      });
    }
  };

}(jQuery, Drupal));
