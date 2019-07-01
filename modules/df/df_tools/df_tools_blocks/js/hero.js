/**
 * @file hero.js
 */
(function ($, Drupal) {

  "use strict";

  /**
   * Center hero callout.
   */
  Drupal.behaviors.DFToolsHero = {
    attach: function(context) {
      function centerCallout () {
        var heroBlockHeight = $('.hero-block').innerHeight();
        var heroBlockFields = $('.hero-block .hero-block-fields');
        var heroBlockFieldsHeight = heroBlockFields.outerHeight();
        var heroMargin = Math.floor((heroBlockHeight - heroBlockFieldsHeight)/2);

        heroBlockFields.css("margin-top", heroMargin)
      };
      centerCallout();

      //Reset margin-top on resize
      $(window).resize(centerCallout);
    }
  };

}(jQuery, Drupal));
