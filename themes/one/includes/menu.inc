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
