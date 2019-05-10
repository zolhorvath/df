<?php
/**
 * @file
 * Theme and preprocess functions for fields.
 */

/**
 * Implements hook_theme_suggestions_HOOK_alter() for field.
 */
function one_theme_suggestions_field_alter(array &$suggestions, array $variables) {
  $original_suggestions = $suggestions;
  $element = $variables['element'];
  $view_mode = $element['#view_mode'];

  foreach ($original_suggestions as $suggestion) {
    $suggestions[] = $suggestion . '__' . $view_mode;
  }
}
