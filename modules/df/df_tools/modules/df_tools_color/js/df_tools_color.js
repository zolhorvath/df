/**
 * @file
 * Contains all javascript logic for df_tools_color.
 */

(function ($, Drupal) {

  Drupal.behaviors.df_tools_color = {
    attach: function (context, settings) {
      $(document.body, context).once('df_tools_color', function () {
        if (settings.df_tools_color.css != undefined) {
          $.get(settings.df_tools_color.css, function (data) {
            // Initialize parser object
            var parser = new cssjs();
            // Parse the loaded css string
            var parsed = parser.parseCSS(data);
            var parsed_flat = [];

            // Flatten media queries
            for (var i in parsed) {
              if (parsed[i]['type'] == 'media') {
                // Add each substyle as a normal rule with an extra field (media_selector)
                for (var j in parsed[i]['subStyles']) {
                  parsed[i]['subStyles'][j]['media_selector'] = parsed[i]['selector'];
                  parsed_flat.push(parsed[i]['subStyles'][j]);
                }
              }
              else {
                parsed_flat.push(parsed[i]);
              }
            }

            // An object is used here to make initial selector sorting easier
            var colors = {};
            for (var i in parsed_flat) {
              var current = parsed_flat[i]['rules'];
              for (var j in current) {
                var rule = current[j];
                var directives = ['color', 'background-color', 'background'];
                // Some of the css.js parsing isn't perfect, so we need to check that our required fields are present
                if (rule !== undefined && directives.indexOf(rule['directive']) > -1) {
                  // Get absolute rgb value of color using a JS trick
                  var d = document.createElement("div");
                  d.style.color = rule['value'];
                  document.body.appendChild(d);
                  var color = window.getComputedStyle(d).color;
                  document.body.removeChild(d);

                  // Add this selector to the list of colors
                  if (colors[color] === undefined) {
                    colors[color] = [];
                  }
                  var color_array = [parsed_flat[i]['selector'], rule['directive']];
                  if (parsed_flat[i]['media_selector'] !== undefined) {
                    color_array.push(parsed_flat[i]['media_selector']);
                  }
                  colors[color].push(color_array);
                }
              }
            }

            // Order the list
            colors_ordered = [];
            for (var i in colors) {
              colors_ordered.push([i, colors[i]]);
            }

            // Sort the list from most selectors > least selectors
            colors_ordered.sort(function (a, b) {
              return (b[1].length - a[1].length);
            });

            // Add our parsed colors to the color picker
            var base_element = $('<input type="text" style="display:none">');
            for (var i in colors_ordered) {
              var element = base_element.clone();
              element.data('color-index', i);
              $('.colors-form').append(element);
              element.spectrum({
                // Allow users to change the alpha value of colors
                showAlpha: true,
                // Allow direct input of hex/rgb values
                showInput: true,
                // Set the default color to the current color in css
                color: colors_ordered[i][0],
                // Default the input format to hex
                preferredFormat: "hex",
                // Add default classes to the color picker and our color palette
                containerClassName: 'sp-container-index-' + i,
                hide: function(color) {
                  var index = $(this).data('color-index');
                  colors_ordered[index][0] = color.toHexString();
                }
              });

              // Add metadata to our container
              var container = $('.sp-container-index-' + i);
              container.data('initial-color', colors_ordered[i][0]);
              container.data('color-index', i);
              container.find('.sp-button-container').append('<a href="#" class="sp-reset">reset</a>');

              // Append a list of selectors that use this color
              var selectors = $('<ul class="color-selectors" style="display: none"></ul>');
              for (var j in colors_ordered[i][1]) {
                selectors.append('<li>' + colors_ordered[i][1][j][0] + '</li>');
              }

              // Add a "View selectors" dropdown to the popup, in case you want to see what is affected by this color
              // @todo Make the long ones more readable
              var selector_wrapper = $('<div class="colors-selectors-wrapper"></div>');
              selector_wrapper.append('<a href="#" class="color-selectors-button">View selectors</a>');
              selector_wrapper.append(selectors);
              container.find('.sp-picker-container').append(selector_wrapper);
            }

            // We've added an additional button to the color picker that allows users to reset to the original color,
            //  even after futzing with it a few times.
            $('.sp-reset').on('click', function () {
              var parent = $(this).closest('.sp-container');
              var input = parent.find('.sp-input');
              input.val(parent.data('initial-color'));
              input.trigger('change');
            });

            // Make the selectors collapsible to save screen space
            $('.color-selectors-button').on('click', function () {
              var selectors = $(this).siblings('.color-selectors');
              selectors.slideToggle();
            });

            // Form submit handler to add the palette as JSON to a hidden form field
            $('#df-tools-color-form').submit(function( event ) {
              $(this).find('#edit-colors-json').val(JSON.stringify(colors_ordered));
            });
          });
        }
      });
    }
  }

})(jQuery, Drupal);
