/**
 * @file
 * Contains Javascript required to format the form
 */

(function ($, Drupal) {

  "use strict";

  Drupal.behaviors.DFToolsSlideshow = {
    attach: function (context, settings) {
      // @todo Support multiple slideshows on one page with different settings.
      var $slideshow = $('.df-tools-slideshow > .field-items').not('.slick-initialized');
      if (settings.DFToolsSlideshow.slick.customPaging === true) {
        settings.DFToolsSlideshow.slick.customPaging = function(slider, i) {
          var $slide = $(slider.$slides[i]);
          return $('<a href="javascript:;" class="df-tools-slideshow-custom-pager"></a>').append($slide.find('.df-tools-slideshow-pager-element').clone());
        };
        $slideshow.addClass('df-tools-slideshow-uses-custom-pager');
      }
      $slideshow.not('.slick-initialized').slick(settings.DFToolsSlideshow.slick);
    }
  };

}(jQuery, Drupal));
