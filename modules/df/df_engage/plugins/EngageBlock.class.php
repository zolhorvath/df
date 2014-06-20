<?php
/**
 * @file
 * DF Engage bean plugin.
 */

class EngageBlock extends BeanPlugin {

 /**
  * Declares default block settings.
  */
  public function values() {
    return array(
      'view_mode' => 'default',
    );
  }

  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    return array();
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    return $content;
  }

}
