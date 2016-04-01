api = 2
core = 7.x

; Libraries
libraries[ckeditor_lite][download][type] = "get"
libraries[ckeditor_lite][download][url] = "https://github.com/loopindex/ckeditor-track-changes/archive/e6cb478cbe21cc0cdc14fb9a8b5f60cf4957db1f.zip"
libraries[ckeditor_lite][type] = "libraries"
libraries[ckeditor_lite][directory_name] = "lite"

; Stop CKLite from acting on content insertion.
; http://drupal.org/node/2482879
libraries[ckeditor_lite][patch][2482879] = "http://drupal.org/files/issues/cklite-content-insertion-2482879-3.patch"
