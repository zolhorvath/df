; A separate drupal-org-core.make file makes it so we can apply core patches
; if we need to.

api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = 7.22

; CORE PATCHES

; Allow install profiles to change the system requirements
; http://drupal.org/node/1772316
;projects[drupal][patch][] = "http://drupal.org/files/allow_change_system-requirements-1772316-4.patch"

; Site Preview System
; Load multiple revisions at once - http://drupal.org/node/1730874
projects[drupal][patch][] = http://drupal.org/files/1730874_0.patch

; Commerce
; Registry rebuild should not parse the same file twice in the same request
; http://drupal.org/node/1470656#comment-6047132
projects[drupal][patch][] = "http://drupal.org/files/drupal-1470656-14.patch"
; drupal_add_js() is missing the 'browsers' option
; http://drupal.org/node/865536
projects[drupal][patch][] = "http://drupal.org/files/drupal-865536-204.patch"

