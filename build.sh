#!/bin/sh

MAKEFILE='build-df.make'
TARGET=$1
CALLPATH=`dirname $0`
drush make $CALLPATH/$MAKEFILE $TARGET

