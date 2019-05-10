<?php
/**
 * @file
 * Theme and preprocess functions for menus.
 */

function one_preprocess_menu(&$variables) {

  // Set container for Navbar
  if (theme_get_setting('navbar_full_width')) {
    $variables['navbar_width'] = 'container-fluid';
  }
  else {
    $variables['navbar_width'] = 'container';
  }

}

/**
 * Implements hook_theme_suggestions_HOOK_alter().
 *
 * Provide region based menu suggestions.
 */
function one_theme_suggestions_menu_alter(&$suggestions, array $variables) {
  if (isset($variables['attributes']['region'])) {
    $suggestions[] = 'menu__' . $variables['attributes']['region'];
    $suggestions[] = 'menu__' . $variables['menu_name'] . '__' . $variables['attributes']['region'];
  }
}
