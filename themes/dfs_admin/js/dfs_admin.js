/**
 * @file
 * Javascript behaviors which enhance the Material Admin theme.
 *
 */

(function ($, Drupal, drupalSettings) {

  Drupal.behaviors.DFSAdmin = {
    attach: function (context, settings) {
      // Turn color preview h2 into a button
      $('.color-form').find('h2').replaceWith(function() {
        return '<a class="btn color-preview-preview">' + $(this).text() + '</a>';
      });

      // Toggle color preview display
      $('a.btn.color-preview-preview').click(function() {
         $('.color-preview').toggle();
      });
    }
  }

})(jQuery, Drupal, drupalSettings);
