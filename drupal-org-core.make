api = 2
core = 8.x

; Drupal Core (8.0.0-beta15+)
projects[drupal][type] = "core"
projects[drupal][version] = "8.x-dev"
projects[drupal][download][type] = "git"
projects[drupal][download][revision] = "3cd0943"
projects[drupal][download][branch] = "8.0.x"

; Add a rollback functionality to migrate
; http://drupal.org/node/2361093
projects[drupal][patch][2361093] = "http://drupal.org/files/issues/add_a_rollback-2361093-5.patch"

; Add authentication support for Views
; https://www.drupal.org/node/2228141
projects[drupal][patch][2228141] = "http://drupal.org/files/issues/add_authentication-2228141-47.patch"
