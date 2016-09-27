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
      $('.masonry-gallery').masonry({
        columnWidth: 320,
        itemSelector: '.item'
      }).imagesLoaded(function() {
        $('.masonry-gallery').masonry('reload');
      });
    }
  };

}(jQuery, Drupal));
