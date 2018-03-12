<?php

namespace Acquia\DFExtension\Context;

use Drupal\DrupalExtension\Context\DrupalSubContextBase;

/**
 * A context with miscellaneous helpers.
 */
class MiscellaneousContext extends DrupalSubContextBase {

  /**
   * "Manually" writes text into a field.
   *
   * @param string $text
   *   The text to write into the field.
   * @param string $field
   *   The label, placeholder, ID or name of the field.
   *
   * @Given I write :text into :field
   */
  public function iWriteTextIntoField($text, $field) {
    $this->getSession()
      ->getDriver()
      ->getWebDriverSession()
      ->element('xpath', $this->getSession()->getSelectorsHandler()->selectorToXpath('named_exact', array('field', $field)))
      ->postValue(['value' => [$text]]);
  }

  /**
   * Asserts that the current page is an admin page.
   *
   * @Then The page should be an admin page
   */
  public function assertAdminPage() {
    /** @var \Drupal\Core\Routing\AdminContext $admin_context */
    $admin_context = \Drupal::service('router.admin_context');
    return $admin_context->isAdminRoute();
  }

}
