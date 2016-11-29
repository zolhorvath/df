/**
 * @file magellan.js
 */
(function ($, Drupal) {

  "use strict";

  /**
   * Dynamically fills the "Magellan" block with valid links.
   */
  Drupal.behaviors.DFToolsBlocksMagellan = {
    attach: function (context) {
      $('.df-tools-magellan-block', context).once('magellan').each(function () {
        var $blocks_after = $(this).parents().eq(1).nextAll();
        var $menu = $(this).find('.menu');
        $menu.empty();
        $blocks_after.each(function () {
          $(this).find('.block-title').each(function () {
            if (!this.hasAttribute('id')) {
              $(this).uniqueId();
            }
            var $anchor = $('<a></a>');
            $anchor.attr('href', '#' + $(this).attr('id'));
            $anchor.text($(this).text());
            $menu.append($('<li></li>').append($anchor));
          });
        });
        $(this).find('[data-sticky], [data-magellan]').each(function() {
          if ($(this).data('zfPlugin')) {
            $(this).foundation('destroy');
          }
        });
        $(this).foundation();
        $(this).find('a').on('click', function () {
          $('[data-magellan]').data('zfPlugin').options.barOffset = $('#toolbar-bar:visible').outerHeight() + $('#toolbar-item-administration-tray:visible').outerHeight() + $(this).outerHeight() - 10;
        });
      });
    }
  };

}(jQuery, Drupal));
