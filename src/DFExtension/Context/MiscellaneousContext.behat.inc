<?php

namespace Acquia\DFExtension\Context;

use Acquia\LightningExtension\Context\PanelsInPlaceContext;
use Acquia\LightningExtension\Context\UtilityContext;
use Drupal\DrupalExtension\Context\DrupalSubContextBase;
use Drupal\DrupalExtension\Context\MinkContext;

/**
 * A context with miscellaneous helpers.
 */
class MiscellaneousContext extends DrupalSubContextBase {

  /**
   * The Mink context.
   *
   * @var MinkContext
   */
  protected $minkContext;

  /**
   * Gathers required contexts.
   *
   * @BeforeScenario
   */
  public function gatherContexts() {
    $this->minkContext = $this->getContext(MinkContext::class);
  }

  /**
   * Opens the moderation sidebar.
   *
   * @When I open the moderation sidebar
   */
  public function openModerationSidebar() {
    $assert = $this->assertSession();

    // Assert that the tab exists...
    $link = $assert->elementExists(
      'named',
      ['link', 'Tasks'],
      $assert->elementExists('css', '.moderation-sidebar-toolbar-tab')
    );

    // ...but only open it if not already active.
    if ($link->hasClass('sidebar-open') == FALSE) {
      $link->click();
      $this->minkContext->iWaitForAjaxToFinish();
    }
  }

  /**
   * Close the Panels IPE tray.
   *
   * @When I close the editor
   */
  public function closeEditor() {
    $assert = $this->assertSession();

    $panelsinplace = $this->getContext(PanelsInPlaceContext::class);

    // Assert that the tab exists...
    $link = $assert->elementExists(
      'named',
      ['link', 'Cancel'],
      $assert->elementExists('css', '.ipe-tabs', $panelsinplace->assertTray())
    );

    $link->click();

    /** @var \Acquia\LightningExtension\Context\UtilityContext $utility */
    $utility = $this->getContext(UtilityContext::class);
    $utility->acceptAlerts([$this->minkContext, 'iWaitForAjaxToFinish']);
  }

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
