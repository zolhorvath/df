#!/bin/sh

# Use: Run this file install Demo Framework and optionally automatically enable
# a scenario.
# Example: ./install.sh ../d8df dfs_fin

TARGET=$1
SCENARIO=$2

cd $TARGET

php profiles/df/modules/contrib/composer_manager/scripts/init.php
composer drupal-update
composer dumpautoload

drush si df --account-name=admin --account-pass=presales -y

if [ ! -z "$SCENARIO" ]; then
  drush es $SCENARIO
fi

drush uli

cd -
