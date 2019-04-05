/**
 * @file
 * Color preview enhancements for the Obio theme.
 */
(function ($, Drupal, drupalSettings) {
  'use strict';

  Drupal.color = {
    logoChanged: false,
    callback: function (context, settings, $form) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('.color-preview .color-preview-logo img').attr('src', settings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off.
      if (settings.color.logo === null) {
        $('div').remove('.color-preview-logo');
      }

      var $colorPreview = $form.find('.color-preview');
      var $colorPalette = $form.find('.js-color-palette');

      // Solid background.
      $('.color-preview').css('background-color', $colorPalette.find('input[name="palette[base]"]').val());

      $('.color-preview .logocolor').css('color', $colorPalette.find('input[name="palette[logocolor]"]').val());

      $('.color-preview .header-left').css('background-color', $colorPalette.find('input[name="palette[headerbgleft]"]').val());

      $('.color-preview .header-right').css('background-color', $colorPalette.find('input[name="palette[headerbgright]"]').val());

      $('.color-preview .hero a, .color-preview .body a').css('color', $colorPalette.find('input[name="palette[link]"]').val());

      $('.color-preview .hero a, .color-preview .body a').hover(function(){
          $(this).css('color', $colorPalette.find('input[name="palette[linkhover]"]').val());
      }, function(){
          $(this).css('color', $colorPalette.find('input[name="palette[link]"]').val());
      });

      $('.color-preview .headerlinkcolor .header-left, .color-preview .main-menu a').css('color', $colorPalette.find('input[name="palette[headerlinkleft]"]').val());

      $('.color-preview ul.main-menu a').hover(function(){
          $(this).css('color', $colorPalette.find('input[name="palette[headerlinkhoverleft]"]').val());
      }, function(){
          $(this).css('color', $colorPalette.find('input[name="palette[headerlinkleft]"]').val());
      });

      $('.color-preview ul.main-menu li').hover(function(){
          $(this).css('border-color', $colorPalette.find('input[name="palette[headerlinkhover]"]').val());
      });

      $('.color-preview .secondary-menu a').css('color', $colorPalette.find('input[name="palette[headerlinkright]"]').val());


      $('.color-preview ul.secondary-menu a').hover(function(){
          $(this).css('color', $colorPalette.find('input[name="palette[headerlinkhoverright]"]').val());
      }, function(){
          $(this).css('color', $colorPalette.find('input[name="palette[headerlinkright]"]').val());
      });

      $('.color-preview .footer').css('background-color', $colorPalette.find('input[name="palette[footerbg]"]').val());

      $('.color-preview .footerlinkcolor a').css('color', $colorPalette.find('input[name="palette[footerlink]"]').val());

      $('.color-preview ul.footer-menu li a').hover(function(){
          $(this).css('border-color', $colorPalette.find('input[name="footerlinkhover]"]').val());
      }, function(){
          $(this).css('border-color', $colorPalette.find('input[name="palette[footerlink]"]').val());
      });
    }
  };
})(jQuery, Drupal, drupalSettings);
