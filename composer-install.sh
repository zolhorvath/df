#!/bin/sh

# Use: Run this file install Demo Framework and optionally automatically enable
# a scenario.
# Example: ./install.sh ../d8df dfs_fin

TARGET=$1
SCENARIO=$2

# Move into the target directory.
if [ ! -r $TARGET ]; then
  mkdir -p $TARGET
fi

# Use Composer to attempt to install dependencies.
if [ -r composer.lock ]; then
  rm -rf composer.lock
fi

composer install

mv docroot $TARGET/.
mv vendor $TARGET/.

cd $TARGET/docroot

# Clone zurb-foundation as zurb_foundation (d.o. packaging cannot currently find this repo)
git clone --branch 8.x-6.x https://git.drupal.org/project/zurb-foundation.git profiles/df/themes/contrib/zurb_foundation

# Install the profile.
if [ ! -r sites/default/settings.php ]; then
  echo "No DB connection for docroot: $TARGET. Ensure settings.php is configured before installation."
else
  drush si df --account-name=admin --account-pass=presales -y
  # Enable optional scenario.
  if [ ! -z "$SCENARIO" ]; then
    drush es $SCENARIO
  fi
fi

cd -
