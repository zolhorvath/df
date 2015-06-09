api = 2
core = 8.x

projects[drupal][type] = core
projects[drupal][version] = 8.0.0-beta11

; Add a rollback functionality to migrate
; http://drupal.org/node/2361093
projects[drupal][patch][] = "http://drupal.org/files/issues/add_a_rollback-2361093-5.patch"
