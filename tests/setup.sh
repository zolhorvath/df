#!/usr/bin/env bash
php -r "readfile('https://getcomposer.org/installer');" | php
php composer.phar install
touch behat.local.yml
