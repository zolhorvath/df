<?php

/**
 * @file
 * Lists available colors and color schemes for the One theme.
 */

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'base' => t('Body background (base)'),
    'text' => t('Body foreground (text)'),
    'link' => t('Primary link text'),
    'linkhover' => t('Primary link hover color'),
    'headerbgleft' => t('Header background (left side)'),
    'logocolor' => t('Logo text'),
    'headerlinkleft' => t('Header link (left side)'),
    'headerlinkhoverleft' => t('Header link hover (left side)'),
    'headerbgright' => t('Header background (right side)'),
    'headerlinkright' => t('Header link (right side)'),
    'headerlinkhoverright' => t('Header link hover (right side)'),
  ),
  // Define "color_placeholders" key if you would use color placeholders instead
  // of explicitly defined colors.
  //
  // If the calculated placeholders are fine for you, it's enought to set this
  // key to TRUE.
  //
  // In that case, field (and color) defined above as headerbg would have a
  // placeholder "#__headerbg__". That should be used in your template CSS file.
  //
  // If you want to customize placeholders, you have to define
  // "color_placeholders" as an array. Keys should match the field (color)
  // key, and it's value should set to the needed placeholder string.
  //
  // These custom placeholders also will get the needed prefix and suffix,
  // and will be processed by HTML::cleanCssIdentifier.
  //
  // Example:
  // @code
  //'headerbg' => 'header-bg', // Placeholder in the CSS: #__header-bg__
  // @endcode
  'color_placeholders' => [
    'base' => 'body-bg',
    'text' => 'body-color',
    'link' => 'link-color',
    'linkhover' => 'link-color-hover',
    'headerbgleft' => 'header-bg-left',
    'logocolor' => 'logocolor',
    'headerlinkleft' => 'header-link-left',
    'headerlinkhoverleft' => 'header-link-hover-left',
    'headerbgright' => 'header-bg-right',
    'headerlinkright' => 'header-link-right',
    'headerlinkhoverright' => 'header-link-hover-right',
  ],
  // Pre-defined color schemes.
  //
  // Color module will try to shift non-defined colors found in the CSS based on
  // the determined color type (base|text|link). These are detected partially
  // based on the selector (if seletor contains "a", those colors are "link"
  // colors) and based on the css property (preceeding "color:" property means
  // "text" type if the selector doesn't contain "a"). Base is the fallback
  // type.
  //
  // So if you don't define EVERY used CSS color, colors 'base', 'text' and
  // 'link' should be defined to keep the shifting to be functional.
  // These colors would act as the base of the unexpressed theme colors. If you
  // don't do that, Color module will throw errors doing the color shifting.
  //
  // Because of this behavior, color_placeholders used in the CSS file always
  // have to be defined.
  'schemes' => array(
    'default' => array(
      'title' => t('Blue (default)'),
      'colors' => array(
        'base' => '#ffffff',
        'text' => '#0a0a0a',
        'link' => '#007bff',
        'linkhover' => '#0056b3',
        'headerbgleft' => '#f6fbfb',
        'logocolor' => '#0056b3',
        'headerlinkleft' => '#353535',
        'headerlinkhoverleft' => '#007bff',
        'headerbgright' => '#007bff',
        'headerlinkright' => '#ffffff',
        'headerlinkhoverright' => '#bbdefb',
      ),
    ),
  ),

  // CSS files (excluding CSS @imports) to rewrite with new color scheme.
  'css' => array(
    'assets/css/one.color-placeholders.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.svg',
  ),

  // //Preview files.
  'preview_library' => 'one/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'one'),
      ],
    ],
  ],
);
