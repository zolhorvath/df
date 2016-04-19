#!/bin/bash
# @file
# Behat integration - Script step.

set -e $DRUPAL_TI_DEBUG

# Ensure we are in the right directory.
cd "$DRUPAL_TI_DRUPAL_DIR"

# Now go to the local behat tests, being within the module installation is
# needed for example for the drush runner.
cd "$DRUPAL_TI_BEHAT_DIR"

df_header Running tests

# Copy into place.
mv -f "$TRAVIS_BUILD_DIR"/behat.travis.yml.dist .

# We need to create a behat.yml file from behat.yml.dist.
drupal_ti_replace_behat_vars

# And run the tests.
ARGS=( $DRUPAL_TI_BEHAT_ARGS )
if [[ "$SCENARIO" == none ]]; then ./bin/behat --tags=df; fi
if [[ "$SCENARIO" != none ]]; then ./bin/behat --tags=$SCENARIO; fi
