<?php
/**
 * @file
 * dfs_wem.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function dfs_wem_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'dfs_wem_responsive';
  $layout->admin_title = 'DFS WEM Responsive';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'responsive';
  $layout->settings = array(
    'regions' => array(
      'header_a' => 'header_a',
      'header_b' => 'header_b',
      'header_c' => 'header_c',
      'subheader_a' => 'subheader_a',
      'subheader_b' => 'subheader_b',
      'subheader_c' => 'subheader_c',
      'subheader_d' => 'subheader_d',
      'body' => 'body',
      'sidebar_a' => 'sidebar_a',
      'sidebar_b' => 'sidebar_b',
      'sidebar_c' => 'sidebar_c',
      'sidebar_d' => 'sidebar_d',
      'footer_a' => 'footer_a',
      'footer_b' => 'footer_b',
    ),
    'overrides' => array(
      'smartphone' => array(
        0 => array(
          'name' => 'title',
          'columns' => 6,
        ),
        1 => array(
          'name' => 'navigation',
          'columns' => 6,
        ),
        2 => array(
          'name' => 'header_a',
          'columns' => 6,
        ),
        3 => array(
          'name' => 'header_b',
          'columns' => 6,
        ),
        4 => array(
          'name' => 'header_c',
          'columns' => 6,
        ),
        5 => array(
          'name' => 'subheader_a',
          'columns' => 6,
        ),
        6 => array(
          'name' => 'subheader_b',
          'columns' => 6,
        ),
        7 => array(
          'name' => 'subheader_c',
          'columns' => 6,
        ),
        8 => array(
          'name' => 'subheader_d',
          'columns' => 6,
        ),
        9 => array(
          'name' => 'body',
          'columns' => 6,
        ),
        10 => array(
          'name' => 'sidebar_a',
          'columns' => 6,
        ),
        11 => array(
          'name' => 'sidebar_b',
          'columns' => 6,
        ),
        12 => array(
          'name' => 'sidebar_c',
          'columns' => 6,
        ),
        13 => array(
          'name' => 'sidebar_d',
          'columns' => 6,
        ),
        14 => array(
          'name' => 'footer_a',
          'columns' => 6,
        ),
        15 => array(
          'name' => 'footer_b',
          'columns' => 6,
        ),
      ),
      'tablet' => array(
        0 => array(
          'name' => 'title',
          'columns' => 1,
        ),
        1 => array(
          'name' => 'navigation',
          'columns' => 5,
        ),
        2 => array(
          'name' => 'header_a',
          'columns' => 6,
        ),
        3 => array(
          'name' => 'header_b',
          'columns' => 3,
        ),
        4 => array(
          'name' => 'header_c',
          'columns' => 3,
        ),
        5 => array(
          'name' => 'subheader_a',
          'columns' => 3,
        ),
        6 => array(
          'name' => 'subheader_b',
          'columns' => 3,
        ),
        7 => array(
          'name' => 'subheader_c',
          'columns' => 3,
        ),
        8 => array(
          'name' => 'subheader_d',
          'columns' => 3,
        ),
        9 => array(
          'name' => 'body',
          'columns' => 6,
        ),
        10 => array(
          'name' => 'sidebar_a',
          'columns' => 6,
        ),
        11 => array(
          'name' => 'sidebar_b',
          'columns' => 6,
        ),
        12 => array(
          'name' => 'sidebar_c',
          'columns' => 6,
        ),
        13 => array(
          'name' => 'sidebar_d',
          'columns' => 6,
        ),
        14 => array(
          'name' => 'footer_a',
          'columns' => 6,
        ),
        15 => array(
          'name' => 'footer_b',
          'columns' => 6,
        ),
      ),
      'standard' => array(
        0 => array(
          'name' => 'header_b',
          'columns' => 6,
        ),
        1 => array(
          'name' => 'header_c',
          'columns' => 6,
        ),
        2 => array(
          'name' => 'subheader_a',
          'columns' => 3,
        ),
        3 => array(
          'name' => 'subheader_b',
          'columns' => 3,
        ),
        4 => array(
          'name' => 'sidebar_a',
          'columns' => 3,
        ),
        5 => array(
          'name' => 'sidebar_b',
          'columns' => 3,
        ),
        6 => array(
          'name' => 'sidebar_c',
          'columns' => 3,
        ),
        7 => array(
          'name' => 'footer_a',
          'columns' => 3,
        ),
        8 => array(
          'name' => 'navigation',
          'columns' => 9,
        ),
        9 => array(
          'name' => 'header_a',
          'columns' => 12,
        ),
        10 => array(
          'name' => 'subheader_c',
          'columns' => 3,
        ),
        11 => array(
          'name' => 'title',
          'columns' => 3,
        ),
        12 => array(
          'name' => 'body',
          'columns' => 12,
        ),
        13 => array(
          'name' => 'sidebar_d',
          'columns' => 3,
        ),
        14 => array(
          'name' => 'footer_b',
          'columns' => 9,
        ),
        15 => array(
          'name' => 'footer_c',
          'columns' => 2,
        ),
        16 => array(
          'name' => 'footer_d',
          'columns' => 1,
        ),
        17 => array(
          'name' => 'footer_e',
          'columns' => 15,
        ),
        18 => array(
          'name' => 'footer_f',
          'columns' => 9,
        ),
        19 => array(
          'name' => 'subheader_d',
          'columns' => 3,
        ),
      ),
    ),
  );
  $export['dfs_wem_responsive'] = $layout;

  return $export;
}
