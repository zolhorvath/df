<?php

class RoboFile extends \Robo\Tasks {

  /**
   * {@inheritdoc}
   */
  protected function taskBehat($behat = NULL) {
    return parent::taskBehat($behat ?: 'vendor/bin/behat')
      ->config('docroot/sites/default/files/behat.yml')
      ->format('pretty')
      ->option('colors')
      ->option('stop-on-failure')
      ->option('strict');
  }

  protected function taskDrupal($command, $console = NULL) {
    return $this->taskExec($console ?: '../vendor/bin/drupal')
      ->rawArg($command)
      ->dir('docroot');
  }

  protected function taskDrush($command, $drush = NULL) {
    return $this->taskExec($drush ?: '../vendor/bin/drush')
      ->rawArg($command)
      ->dir('docroot');
  }

  /**
   * Run Behat tests.
   *
   * To run all tests, simply run 'test:behat'. To run a specific feature, you
   * can pass its path, relative to the tests/features directory:
   *
   * test:behat media/image.feature
   *
   * You can omit the .feature extension. This example runs
   * tests/features/workflow/diff.feature:
   *
   * test:behat workflow/diff
   *
   * This also works with a directory of features. This example runs everything
   * in tests/features/media:
   *
   * test:behat media
   *
   * Any command-line options after the initial -- will be passed unmodified to
   * Behat. So you can filter tests by tags, like normal:
   *
   * test:behat -- --tags=javascript,~media
   *
   * This command will start Selenium Server in the background during the test
   * run, to support functional JavaScript tests.
   */
  public function testBehat(array $arguments) {
    $this
      ->taskExec('vendor/bin/selenium-server-standalone')
      ->rawArg('-port 4444')
      ->rawArg('-log selenium.log')
      ->background()
      ->run();

    $task = $this->taskBehat();

    foreach ($arguments as $argument) {
      if ($argument{0} == '-') {
        $task->rawArg($argument);
      }
      else {
        $feature = "tests/features/$argument";

        if (file_exists("$feature.feature")) {
          $feature .= '.feature';
        }
        $task->arg($feature);
      }
    }
    return $task;
  }

}
