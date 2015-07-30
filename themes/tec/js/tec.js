(function ($, Drupal) {

  "use strict";

  /**
   *  Make sure Foundation is initialized correctly.
   */
  Drupal.behaviors.blockFilterByText = {
    attach: function (context, settings) {
      $(document).foundation();
    }
  };


}(jQuery, Drupal));
