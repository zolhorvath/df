api = 2
core = 7.x

; Include the definition of how to build Drupal core directly, including patches.
includes[] = drupal-org-core.make

; Copy the currently checked out install profile and recursively build all its
; dependencies.
projects[df][type] = "profile"
projects[df][download][type] = "copy"
projects[df][download][url] = "file://."
