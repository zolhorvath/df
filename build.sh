#!/bin/sh

# Usage ./build.sh ~/Sites/demo.local --dev
CALLPATH=`dirname $0`
TARGET=$1
shift

echo '      ____________________________'
echo '     _/\/\/\/\/\____/\/\/\/\/\/\_'
echo '    _/\/\____/\/\__/\/\_________'
echo '   _/\/\____/\/\__/\/\/\/\/\___'
echo '  _/\/\____/\/\__/\/\_________'
echo ' _/\/\/\/\/\____/\/\_________'
echo '____________________________'

if [ -d $TARGET ]; then
  yes "yes" | rm -rf $TARGET
fi

# Use Composer to attempt to install dependencies.
composer install $@

# Move build files to target directory.
mkdir -p $TARGET
if [ -r composer.lock ]; then
  mv composer.lock $TARGET/.
fi
if [ -r docroot ]; then
  mv docroot $TARGET/.
fi
if [ -r vendor ]; then
  mv vendor $TARGET/.
fi
if [ -r bin ]; then
  mv bin $TARGET/.
fi

# Move into newly built directory
if [ -r $TARGET/docroot ]; then
  cd $TARGET/docroot
fi
