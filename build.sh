#!/bin/sh

# Usage ./build.sh ~/Sites/demo.local --working-copy
MAKEFILE='build-df.make'
CALLPATH=`dirname $0`
TARGET=$1
PARAMS=$2
echo '      ____________________________'
echo '     _/\/\/\/\/\____/\/\/\/\/\/\_'
echo '    _/\/\____/\/\__/\/\_________'
echo '   _/\/\____/\/\__/\/\/\/\/\___'
echo '  _/\/\____/\/\__/\/\_________'
echo ' _/\/\/\/\/\____/\/\_________'
echo '____________________________'
if [ ! -z "$PARAMS" ]; then
  drush make --concurrency=5 $CALLPATH/$MAKEFILE $TARGET
else
  drush make "$PARAMS" $CALLPATH/$MAKEFILE $TARGET
fi
