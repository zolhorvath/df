(function ($, Drupal) {
  Drupal.behaviors.scenariosUIListDefault = {
    attach: function (context, settings) {
      $("#edit-scenarios input:checkbox", context).once("scenarioListCleanupDefault").each(function () {
        $(this).change(function() {
          var nocheckboxes = $('#edit-scenarios input:checkbox').not(this);
          nocheckboxes.attr('checked', false);  
          nocheckboxes.prop('checked', false);
          nocheckboxes.siblings("label").children(".scenario--image").removeClass('active');
        });
      });
    }
  };
})(jQuery, Drupal);
