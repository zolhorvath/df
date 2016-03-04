api = 2
core = 8.x

; Drupal Core
projects[drupal][type] = "core"
projects[drupal][version] = "8.0.5"

; Add authentication support for Views
; https://www.drupal.org/node/2228141
projects[drupal][patch][2228141] = "http://drupal.org/files/issues/add_authentication-2228141-54.patch"

; Fix batch callbacks with Drush
; https://www.drupal.org/node/2664290
projects[drupal][patch][2664290] = "http://drupal.org/files/issues/2664290-2--batch-array-typehint.patch"
