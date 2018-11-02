#!/bin/sh

# Use: Run this file to install Demo Framework and optionally enable a scenario profile.
# Example: ./install.sh ../d8df dfs_tec

TARGET=$1
SCENARIO=$2
ADMIN=admin
PASS=password

# Ensure the target directory exists.
if [ -r $TARGET/docroot ]; then
  cd $TARGET/docroot
fi

# Install the profile.
if [ ! -r sites/default/settings.php ]; then
  echo "No DB connection for docroot: $TARGET. Ensure settings.php is configured before installation."
else
  # Enable optional scenario profile.
  if [ ! -z "$SCENARIO" ]; then
    drush si $SCENARIO --account-name=$ADMIN --account-pass=$PASS -y
  else
    drush si df --account-name=$ADMIN --account-pass=$PASS -y
  fi
fi
