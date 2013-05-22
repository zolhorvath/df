<?php

/**
 * @file
 * Theme related processing functions.
 */

/**
 * Implements hook_preprocess_html().
 */
function krull_preprocess_html(&$variables, $hook) {
  // Add more meta tags to proper mobile device compatibility.
  $head = array(
    'viewport' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'viewport',
        'content' => 'width=device-width, target-densityDpi=160dpi, initial-scale=1',
      ),
    ),
    'mobileoptimized' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'MobileOptimized',
        'content' => 'width',
      ),
    ),
    'handheldfriendly' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'HandheldFriendly',
        'content' => 'true',
      ),
    ),
    'apple_mobile_web_app_capable' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'apple-mobile-web-app-capable',
        'content' => 'yes',
      ),
    ),
    'cleartype' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'http-equiv' => 'cleartype',
        'content' => 'on',
      ),
    ),
    'x_ua_compatible' => array(
      '#tag' => 'meta',
      '#attributes' => array(
        'http-equiv' => 'X-UA-Compatible',
        'content' => 'IE-edge,chrome=1',
      ),
    ),
  );
  foreach ($head as $key => $data) {
    drupal_add_html_head($data, $key);
  }
}

/**
 * Implements hook_preprocess_page().
 */
function krull_preprocess_page(&$variables, $hook) {
  $variables['page_title_attributes_array'] = array(
    'class' => array(
      'site-name',
    ),
  );

  if ($variables['logo']) {
    // If the logo is available, hide the title.
    $variables['page_title_attributes_array']['class'][] = 'element-invisible';

    // Make the image output via a renderable array.
    $variables['page']['logo_image'] = array(
      '#theme' => 'image_formatter',
      '#item' => array(
        'uri' => $variables['logo'],
        'alt' => $variables['site_name'] . ' logo',
        'attributes' => array(
          'class' => array('site-logo'),
        ),
      ),
    );

    // If the front page is not being viewed, link the image to the front page.
    if (!$variables['is_front']) {
      $variables['page']['logo_image']['#path'] = array(
        'path' =>  '<front>',
        'options' => array(
          'attributes' => array(
            'class' => array('site-logo-link'),
          ),
        ),
      );
    }
  }

  // Make the menus renderable arrays.
  if ($variables['main_menu']) {
    $variables['page']['main_menu'] = array(
      '#theme' => 'links__system_main_menu',
      '#links' => $variables['main_menu'],
      '#attributes' => array(
        'class' => array('site-menu', 'main-menu'),
      ),
      '#heading' => array(
        'text' => t('Main menu'),
        'level' => 'h3',
        'class' => array('menu-header element-invisible'),
      ),
    );
  }
  if ($variables['secondary_menu']) {
    $variables['page']['secondary_menu'] = array(
      '#theme' => 'links__system_secondary_menu',
      '#links' => $variables['secondary_menu'],
      '#attributes' => array(
        'class' => array('site-menu', 'secondary-menu'),
      ),
      '#heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h3',
        'class' => array('menu-header element-invisible'),
      ),
    );
  }
  // theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Main menu')));
  // theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Secondary menu')));
}

/**
 * Implements hook_process_page().
 */
function krull_process_page(&$variables, $hook) {
  // Crunch down the page title attributes array into a string.
  $variables['page_title_attributes'] = drupal_attributes($variables['page_title_attributes_array']);
}

/**
 * Implements hook_preprocess_node().
 */
function krull_preprocess_node(&$variables, $hook) {
  // Add a general class to the node title.
  $variables['title_attributes_array']['class'][] = 'node-title';
}
