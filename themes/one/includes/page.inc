<?php
/**
 * @file
 * Theme and preprocess functions for page.
 */

function one_preprocess_page(&$variables) {
  // Make Layout Builder pages full width
  if (\Drupal::routeMatch()->getParameter('node') ||
    \Drupal::routeMatch()->getRouteObject()->hasOption('_layout_builder')) {
    $variables['container_class'] = 'container-fluid full';
  }
  // Make Page Mangers pages full width
  elseif (\Drupal::routeMatch()->getRouteObject()->hasDefault('page_manager_page')) {
    $variables['container_class'] = 'container-fluid full';
  }
  else {
    $variables['container_class'] = 'container';
  }

  // Set container for Meta Header
  if (theme_get_setting('meta_header_full_width')) {
    $variables['meta_header_width'] = 'container-fluid';
  }
  else {
    $variables['meta_header_width'] = 'container';
  }

  // Set container for Navbar
  if (theme_get_setting('navbar_full_width')) {
    $variables['navbar_width'] = 'container-fluid';
  }
  else {
    $variables['navbar_width'] = 'container';
  }

  // Set container for Header
  if (theme_get_setting('header_full_width')) {
    $variables['header_width'] = 'container-fluid';
  }
  else {
    $variables['header_width'] = 'container';
  }

  // Set container for Footer
  if (theme_get_setting('footer_full_width')) {
    $variables['footer_width'] = 'container-fluid';
  }
  else {
    $variables['footer_width'] = 'container';
  }
}
