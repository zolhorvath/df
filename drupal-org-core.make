api = 2
core = 8.x

; Drupal Core
projects[drupal][type] = "core"
projects[drupal][version] = "8.1.0"

; Add authentication support for Views
; https://www.drupal.org/node/2228141
projects[drupal][patch][2228141] = "http://drupal.org/files/issues/add_authentication-2228141-54.patch"

; ConnectionNotDefinedException thrown if the "migrate" database does not exist in D6/D7NodeDeriver traits
; https://www.drupal.org/node/2703669
projects[drupal][patch][2703669] = "https://www.drupal.org/files/issues/node-migration-traits-database-exception.patch"

; Quickedit cant edit images
; https://www.drupal.org/node/2635712
projects[drupal][patch][2635712] = "http://drupal.org/files/issues/2635712-14.patch"

; Method removing expired drupalSettings.ajax tries to remove settings when there is no ajax defined
; https://www.drupal.org/node/2700495
projects[drupal][patch][2700495] = "https://www.drupal.org/files/issues/core-js-ajax-views-2700495-5.patch"
