(function ($, Drupal) {

  $(document).ready(function(){
    $(window).on({
      'dialog:aftercreate': function (event, dialog, $modal, settings) {
        var $child = $modal.find('iframe');
        if ($child.length > 0) {
          if ($child.attr('src').indexOf('/entity-browser/modal/browse_content') == 0 ||
            $child.attr('src').indexOf('/entity-browser/modal/image_browser') == 0 ||
            $child.attr('src').indexOf('/entity-browser/iframe/media_browser') == 0 ||
            $child.attr('src').indexOf('/entity-browser/modal/media_browser_in_modal') == 0) {
            // Make the modal full width.
            $modal.dialog({
              width: '100vw',
              height: $(window).height(),
              close: function () {
                $('body').removeClass('full-width-modal-open').css('overflow','auto');
              }
            });
            $modal.parent().addClass('ui-dialog-full-width');
            $child.css('height', $modal.innerHeight());
            $('body').addClass('full-width-modal-open');
          }
        }
      }
    });
  });

})(jQuery, Drupal);
