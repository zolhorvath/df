<?php
/**
 * @file
 * Provide Behat step-definitions for generic Lightning tests.
 */

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Drupal\DrupalDriverManager;
use Drupal\Component\Utility\Random;
use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Behat\Hook\Scope\BeforeScenarioScope;
use Drupal\DrupalExtension\Hook\Scope\AfterUserCreateScope;

class TestSubContext extends RawDrupalContext implements DrupalSubContextInterface {

  /**
   * Contains the DrupalDriverManager.
   *
   * @var \Drupal\DrupalDriverManager
   */
  private $drupal = NULL;

  /**
   * Contains the name of the currently selected iframe.
   *
   * @var string
   */
  private $iframe = NULL;

  /**
   * An array of Drupal users created by other contexts.
   *
   * @var array
   */
  protected $external_users = array();

  /**
   * Keep track of files added by tests so they can be cleaned up.
   *
   * @var array
   */
  protected $files = array();

  /**
   * Set to TRUE if we overrid the private files path during this scenario.
   *
   * @var bool
   */
  protected $private_path_overridden = FALSE;

  /**
   * Initializes context.
   */
  public function __construct(DrupalDriverManager $drupal) {
    $this->drupal = $drupal;
  }

  /**
   * Get a region by name.
   *
   * @param string $region
   *   The name of the region from the behat.yml file.
   *
   * @return Behat\Mink\Element\Element
   *   An element representing the region.
   */
  public function getRegion($region) {
    $session = $this->getSession();
    $regionObj = $session->getPage()->find('region', $region);
    if (!$regionObj) {
      throw new \Exception(sprintf('No region "%s" found on the page %s.', $region, $session->getCurrentUrl()));
    }
    return $regionObj;
  }

  /**
   * Set a variable to mark the current scenario as using javascript.
   *
   * @BeforeScenario @javascript
   */
  public function setJavascript() {
    $this->javascript = true;
  }

  /**
   * Unsets the variable marking the current scenario as using javascript.
   *
   * @AfterScenario @javascript
   */
  public function unsetJavascript() {
    $this->javascript = false;
  }

  /**
   * After every step in a @javascript scenario, we want to wait for AJAX
   * loading to finish.
   *
   * @AfterStep
   */
  public function afterStep($event) {
    if (isset($this->javascript) && $this->javascript && empty($this->iframe)) {
      $text = $event->getStep()->getText();
      if (preg_match('/(follow|press|click|submit|viewing|visit|reload|attach)/i', $text)) {
        $this->iWaitForAjax();
      }
    }
  }

  /**
   * Convert escaped characters in arguments.
   *
   * @Transform :value
   * @Transform :text
   */
  public function escapeTextArguments($argument) {
    $argument = str_replace('\\"', '"', $argument);
    $argument = str_replace('\n', "\n", $argument);
    return $argument;
  }

  /**
   * Wait for the given number of seconds. ONLY USE FOR DEBUGGING!
   *
   * @When (I )wait( for) :seconds second(s)
   */
  public function iWaitForSeconds($seconds) {
    sleep($seconds);
  }

  /**
   * Wait for AJAX to finish.
   *
   * @Given I wait for AJAX
   */
  public function iWaitForAjax() {
    $this->getSession()->wait(5000, 'typeof jQuery !== "undefined" && jQuery.active === 0');
  }

  /**
   * Print the HTML contents of a region for debugging purposes.
   *
   * @Given print the contents of the :region region
   */
  public function printRegionContents($region) {
    print $this->getRegion($region)->getOuterHtml();
  }

  /**
   * Switch to an iFrame.
   *
   * @When I switch to the frame :frame
   */
  public function iSwitchToTheFrame($frame) {
    $this->getSession()->switchToIFrame($frame);
    $this->iframe = $frame;
  }

  /**
   * Switch out of an iFrame.
   *
   * @When I switch out of all frames
   */
  public function iSwitchOutOfAllFrames() {
    $this->getSession()->switchToIFrame();
    $this->iframe = NULL;
  }

  /**
   * @Then I should see :text in the :tag element in the :region region
   */
  public function assertRegionElementText($text, $tag, $region) {
    $regionObj = $this->getRegion($region);
    $elements = $regionObj->findAll('css', $tag);
    if (empty($elements)) {
      throw new \Exception(sprintf('The element "%s" was not found in the "%s" region on the page %s', $tag, $region, $this->getSession()->getCurrentUrl()));
    }

    $found = FALSE;
    foreach ($elements as $element) {
      if ($element->getText() == $text) {
        $found = TRUE;
        break;
      }
    }
    if (!$found) {
      throw new \Exception(sprintf('The text "%s" was not found in the "%s" element in the "%s" region on the page %s', $text, $tag, $region, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @Then I should not see :text in the :tag element with the :attribute attribute set to :value in the :region region
   */
  public function assertNotRegionElementTextAttribute($text, $tag, $attribute, $value, $region) {
    $regionObj = $this->getRegion($region);
    $elements = $regionObj->findAll('css', $tag);
    if (!empty($elements)) {
      foreach ($elements as $element) {
        if ($element->getText() == $text) {
          $attr = $element->getAttribute($attribute);
          if (!empty($attr) && strpos($attr, "$value") !== FALSE) {
            throw new \Exception(sprintf('The text "%s" was found in the "%s" element with the "%s" attribute set to "%s" in the "%s" region on the page %s', $text, $tag, $attribute, $value, $region, $this->getSession()->getCurrentUrl()));
          }
        }
      }
    }
  }

  /**
   * Asserts that the region contains text matching specified pattern.
   *
   * @Then I should see text matching :pattern in the :region region
   */
  public function assertRegionMatchesText($pattern, $region)
  {
    $regionObj = $this->getRegion($region);

    // Find the text within the region
    $regionText = $regionObj->getText();
    if (!preg_match($pattern, $regionText)) {
      throw new \Exception(sprintf("No text matching '%s' was found in the region '%s' on the page %s", $pattern, $region, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * Asserts that the region does not contain text matching specified pattern.
   *
   * @Then I should not see text matching :pattern in the :region region
   */
  public function assertNotRegionMatchesText($pattern, $region)
  {
    $regionObj = $this->getRegion($region);

    // Find the text within the region
    $regionText = $regionObj->getText();
    if (preg_match($pattern, $regionText)) {
      throw new \Exception(sprintf("Text matching '%s' was found in the region '%s' on the page %s", $pattern, $region, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * Asserts that an image is present and not broken.
   *
   * @Then I should see an image in the :region region
   */
  public function assertValidImageRegion($region) {
    $regionObj = $this->getRegion($region);
    $elements = $regionObj->findAll('css', 'img');
    if (empty($elements)) {
      throw new \Exception(sprintf('No image was not found in the "%s" region on the page %s', $region, $this->getSession()->getCurrentUrl()));
    }

    if ($src = $elements[0]->getAttribute('src')) {
      $params = array('http' => array('method' => 'HEAD'));
      $context = stream_context_create($params);
      $fp = @fopen($src, 'rb', FALSE, $context);
      if (!$fp) {
        throw new \Exception(sprintf('Unable to download <img src="%s"> in the "%s" region on the page %s', $src, $region, $this->getSession()->getCurrentUrl()));
      }

      $meta = stream_get_meta_data($fp);
      fclose($fp);
      if ($meta === FALSE) {
        throw new \Exception(sprintf('Error reading from <img src="%s"> in the "%s" region on the page %s', $src, $region, $this->getSession()->getCurrentUrl()));
      }

      $wrapper_data = $meta['wrapper_data'];
      $found = FALSE;
      if (is_array($wrapper_data)) {
        foreach ($wrapper_data as $header) {
          if (substr(strtolower($header), 0, 19) == 'content-type: image') {
            $found = TRUE;
          }
        }
      }

      if (!$found) {
        throw new \Exception(sprintf('Not a valid image <img src="%s"> in the "%s" region on the page %s', $src, $region, $this->getSession()->getCurrentUrl()));
      }
    }
    else {
      throw new \Exception(sprintf('No image had no src="..." attribute in the "%s" region on the page %s', $region, $this->getSession()->getCurrentUrl()));
    }
  }


  /**
   * @Then /^I should see the image alt "(?P<text>(?:[^"]|\\")*)" in the "(?P<region>[^"]*)" region$/
   *
   * NOTE: We specify a regex to allow escaped quotes in the alt text.
   */
  public function assertAltRegion($text, $region) {
    $regionObj = $this->getRegion($region);
    $element = $regionObj->find('css', 'img');
    $tmp = $element->getAttribute('alt');
    if ($text == $tmp) {
      $result = $text;
    }
    if (empty($result)) {
      throw new \Exception(sprintf('No alt text matching "%s" in the "%s" region on the page %s', $text, $region, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @Then the :field radio button should be set to :option
   *
   * @link: https://www.drupal.org/node/1891584 @endlink
   */
  public function theRadioButtonShouldBeSetTo($field, $option) {
    $page = $this->getSession()->getPage();
    $div = $page->find('xpath', "//div[contains(., '$field') and @class[contains(.,'form-type-radio')]]");
    if ($div) {
      $radios = $div->find('xpath', "//input[@type='radio']");
      if ($radios) {
        $checkedRadio = $div->find('xpath', "//input[@type='radio' and @checked='checked']/following-sibling::label[contains(text(), '$option')] ");
        if (!$checkedRadio) {
          throw new \Exception(sprintf('We found the radio buttons for "%s", but "%s" was not selected.', $field, $option));
        }
      } elseif (!$radios) {
        throw new \Exception(sprintf('We found "%s", but it did not contain any radio buttons".', $field));
      }
    } elseif (!$div) {
      throw new \Exception(sprintf('We couldn\'nt find "%s" on the page', $field));
    } else {
      throw new \Exception('General exception from '.__FUNCTION__);
    }
  }

  /**
   * @Then I should see the radio button :field with the id :id
   * @Then I should see the radio button :field
   */
  public function assertSeeRadioById($field, $id = FALSE) {
    $element = $this->getSession()->getPage();
    $radiobutton = $id ? $element->findById($id) : $element->find('named', array('radio', $this->getSession()->getSelectorsHandler()->xpathLiteral($field)));
    if ($radiobutton === NULL) {
      throw new \Exception(sprintf('The radio button with "%s" was not found on the page %s', $id ? $id : $field, $this->getSession()->getCurrentUrl()));
    }
    if ($id) {
      $value = $radiobutton->getAttribute('value');
      $labelonpage = $radiobutton->getParent()->getText();
      if ($field != $labelonpage) {
        throw new \Exception(sprintf("Button with id '%s' has label '%s' instead of '%s' on the page %s", $id, $labelonpage, $field, $this->getSession()->getCurrentUrl()));
      }
    }
  }

  /**
   * @Then I should not see the radio button :field with the id :id
   * @Then I should not see the radio button :field
   */
  public function assertNotSeeRadioById($field, $id = FALSE) {
    $element = $this->getSession()->getPage();
    $radiobutton = $id ? $element->findById($id) : $element->find('named', array('radio', $this->getSession()->getSelectorsHandler()->xpathLiteral($field)));
    if ($radiobutton !== NULL) {
      throw new \Exception(sprintf('The radio button with "%s" was found on the page %s', $id ? $id : $field, $this->getSession()->getCurrentUrl()));
    }
  }

  /**
   * @Then the :field select should be set to :value
   */
  public function theSelectShouldBeSetTo($field, $value) {
    $select = $this->getSession()->getPage()->findField($field);
    if (empty($select)) {
      throw new \Exception(sprintf('We couldn\'nt find "%s" on the page', $field));
    }
    $options = $select->findAll('xpath', '//option[@selected="selected"]');
    if (empty($select)) {
      throw new \Exception(sprintf('The select "%s" doesn\'t have any options selected', $field));
    }

    $found = FALSE;
    foreach ($options as $option) {
      if ($option->getText() === $value) {
        $found = TRUE;
        break;
      }
    }
    if (!$found) {
      throw new \Exception(sprintf('The select "%s" doesn\'t have the option "%s" selected', $field, $value));
    }
  }
 
  /**
   * @When I select the first autocomplete option for :text on the :field field
   */
  public function iSelectFirstAutocomplete($text, $field) {
    $session = $this->getSession();
    $page = $session->getPage();
    $element = $page->findField($field);
    if (empty($element)) {
      throw new \Exception(sprintf('We couldn\'t find "%s" on the page', $field));
    }
    $page->fillField($field, $text);

    $xpath = $element->getXpath();
    $driver = $session->getDriver();

    // autocomplete.js uses key down/up events directly.

    // Press the backspace key.
    $driver->keyDown($xpath, 8);
    $driver->keyUp($xpath, 8);

    // Retype the last character.
    $chars = str_split($text);
    $last_char = array_pop($chars);
    $driver->keyDown($xpath, $last_char);
    $driver->keyUp($xpath, $last_char);

    // Wait for AJAX to finish.
    $this->iWaitForAJAX();

    // And make sure the autocomplete is showing.
    $this->getSession()->wait(5000, 'jQuery("#autocomplete").show().length > 0');

    // And wait for 1 second just to be sure.
    sleep(1);

    // Press the down arrow to select the first option.
    $driver->keyDown($xpath, 40);
    $driver->keyUp($xpath, 40);

    // Press the Enter key to confirm selection, copying the value into the field.
    $driver->keyDown($xpath, 13);
    $driver->keyUp($xpath, 13);

    // Wait for AJAX to finish.
    $this->iWaitForAJAX();
  }

  /**
   * Maximize the browser window.
   *
   * @When I maximize the browser window
   */
  public function iMaximizeTheBrowserWindow() {
    $this->getSession()->getDriver()->maximizeWindow();
  }

  /**
   * Click on the element with the provided xpath query
   *
   * @When /^I click on the element with xpath "([^"]*)"$/
   */
  public function iClickOnTheElementWithXPath($xpath) {
    $session = $this->getSession();
    $element = $session->getPage()->find('xpath', $session->getSelectorsHandler()->selectorToXpath('xpath', $xpath));

    if (null === $element) {
      throw new \InvalidArgumentException(sprintf('Could not evaluate XPath: "%s"', $xpath));
    }
    $element->click();
  }

}
