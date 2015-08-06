api = 2
core = 7.x

; Modules
projects[advancedqueue][version] = "1.x-dev"
projects[advancedqueue][type] = "module"
projects[advancedqueue][subdir] = "contrib"
projects[advancedqueue][download][type] = "git"
projects[advancedqueue][download][revision] = "33d7cb8"
projects[advancedqueue][download][branch] = "7.x-1.x"

projects[better_exposed_filters][version] = "3.x-dev"
projects[better_exposed_filters][type] = "module"
projects[better_exposed_filters][subdir] = "contrib"
projects[better_exposed_filters][download][type] = "git"
projects[better_exposed_filters][download][revision] = "8cb2a1a"
projects[better_exposed_filters][download][branch] = "7.x-3.x"

projects[image_url_formatter][version] = "1.4"
projects[image_url_formatter][type] = "module"
projects[image_url_formatter][subdir] = "contrib"

projects[jcarousel][version] = "2.x-dev"
projects[jcarousel][type] = "module"
projects[jcarousel][subdir] = "contrib"
projects[jcarousel][download][type] = "git"
projects[jcarousel][download][revision] = "c17cbf8"
projects[jcarousel][download][branch] = "7.x-2.x"

projects[nice_menus][version] = "2.5"
projects[nice_menus][type] = "module"
projects[nice_menus][subdir] = "contrib"

projects[responsive_menus][version] = "1.5"
projects[responsive_menus][type] = "module"
projects[responsive_menus][subdir] = "contrib"

projects[search_autocomplete][version] = "4.x-dev"
projects[search_autocomplete][type] = "module"
projects[search_autocomplete][subdir] = "contrib"
projects[search_autocomplete][download][type] = "git"
projects[search_autocomplete][download][revision] = "d2de428"
projects[search_autocomplete][download][branch] = "7.x-4.x"
; Add a cancel button that closes search autocomplete
; http://drupal.org/node/2388787
projects[search_autocomplete][patch][2388787] = "http://drupal.org/files/issues/search-autocomplete-close-button.patch"

projects[panopoly_theme][type] = "module"
projects[panopoly_theme][subdir] = "contrib"
projects[panopoly_theme][download][type] = "git"
projects[panopoly_theme][download][revision] = "d409deb"
projects[panopoly_theme][download][branch] = "7.x-1.x"
; Remove makefile from Panopoly Theme
; http://drupal.org/node/1904766
projects[panopoly_theme][patch][1904766] = "http://drupal.org/files/issues/panopoly_theme-makefile-free-1904766-13.patch"

; Libraries
libraries[jquery.jcarousel][download][type] = "get"
libraries[jquery.jcarousel][download][url] = "https://github.com/jsor/jcarousel/archive/master.zip"
