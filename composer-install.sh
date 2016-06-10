#!/bin/sh

# Use: Run this file to install Demo Framework and optionally enable a scenario.
# Example: ./install.sh ../d8df dfs_fin

TARGET=$1
SCENARIO=$2

# Ensure the target directory exists.
if [ ! -r $TARGET/docroot ]; then
  cd $TARGET/docroot
else
  return
fi

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
