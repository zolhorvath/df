projects[fape][version] = "1.x-dev"
projects[fape][type] = "module"
projects[fape][subdir] = "contrib"
projects[fape][download][type] = "git"
projects[fape][download][revision] = "1143ee2"
projects[fape][download][branch] = "7.x-1.x"

projects[fieldable_panels_panes][version] = "1.x-dev"
projects[fieldable_panels_panes][type] = "module"
projects[fieldable_panels_panes][subdir] = "contrib"
projects[fieldable_panels_panes][download][type] = "git"
projects[fieldable_panels_panes][download][revision] = "7fe67bc"
projects[fieldable_panels_panes][download][branch] = "7.x-1.x"

projects[gridbuilder][version] = "1.0-alpha2"
projects[gridbuilder][type] = "module"
projects[gridbuilder][subdir] = "contrib"

projects[json2][version] = "1.1"
projects[json2][type] = "module"
projects[json2][subdir] = "contrib"

projects[layout][version] = "1.x-dev"
projects[layout][type] = "module"
projects[layout][subdir] = "contrib"

projects[panels][version] = "3.x-dev"
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
projects[panels][download][type] = "git"
projects[panels][download][branch] = "7.x-3.x"

projects[panelizer][version] = "3.x-dev"
projects[panelizer][subdir] = "contrib"
projects[panelizer][download][type] = "git"
projects[panelizer][download][revision] = "fb796a2"
projects[panelizer][download][branch] = "7.x-3.x"

projects[panopoly_images][type] = "module"
projects[panopoly_images][subdir] = "contrib"
projects[panopoly_images][download][type] = "git"
projects[panopoly_images][download][url] = "http://git.drupal.org/project/panopoly_images.git"
projects[panopoly_images][download][branch] = "7.x-1.x"

projects[panopoly_magic][type] = "module"
projects[panopoly_magic][subdir] = "contrib"
projects[panopoly_magic][download][type] = "git"
projects[panopoly_magic][download][url] = "http://git.drupal.org/project/panopoly_magic.git"
projects[panopoly_magic][download][revision] = "959032402fa1feb4d520ddf8f9242e58584448f6"
projects[panopoly_magic][download][branch] = "7.x-1.x"
projects[panopoly_magic][patch][1899368] = "http://drupal.org/files/panopoly_magic-without-core-1899368-3.patch"

projects[panopoly_theme][type] = "module"
projects[panopoly_theme][subdir] = "contrib"
projects[panopoly_theme][download][type] = "git"
projects[panopoly_theme][download][url] = "http://git.drupal.org/project/panopoly_theme.git"
projects[panopoly_theme][download][revision] = "4f458877f968e61f32974f5c3e24464f1ef59cb4"
projects[panopoly_theme][download][branch] = "7.x-1.x"
projects[panopoly_theme][patch][1904766] = "http://drupal.org/files/panopoly_theme-makefile-free.patch"

projects[panopoly_widgets][type] = "module"
projects[panopoly_widgets][subdir] = "contrib"
projects[panopoly_widgets][download][type] = "git"
projects[panopoly_widgets][download][url] = "http://git.drupal.org/project/panopoly_widgets.git"
projects[panopoly_widgets][download][revision] = "2a98c9e75ba1641c02c047fd0da7a9db1e0283d5"
projects[panopoly_widgets][download][branch] = "7.x-1.x"
projects[panopoly_widgets][patch][1949710] = "http://drupal.org/files/panopoly_widgets-demo-framework-1949710-1.patch"
; Panopoly Widgets contains a makefile under modules/contrib/panopoly_widgets.
; Defer to panopoly_widgets.make to download and patch module dependencies.

projects[panopoly_wysiwyg][type] = "module"
projects[panopoly_wysiwyg][subdir] = "contrib"
projects[panopoly_wysiwyg][download][type] = "git"
projects[panopoly_wysiwyg][download][url] = "http://git.drupal.org/project/panopoly_wysiwyg.git"
projects[panopoly_wysiwyg][download][revision] = "c745f0f2841cfaee33b85e0ea6dbe9b163ac4b3c"
projects[panopoly_wysiwyg][download][branch] = "7.x-1.x"
projects[panopoly_wysiwyg][patch][1904874] = "http://drupal.org/files/panopoly_wysiwyg-defaultconfig-free-1904874-3.patch"
projects[panopoly_wysiwyg][patch][1949542] = "http://drupal.org/files/panopoly_wysiwyg-use-wysiwyg-dev-1949542-1.patch"
; Panopoly WYSIWYG contains a makefile under modules/contrib/panopoly_wysiwyg.
; Defer to panopoly_wysiwyg.make to download and patch module dependencies.

projects[respondjs][version] = "1.1"
projects[respondjs][type] = "module"
projects[respondjs][subdir] = "contrib"

; Libraries
libraries[json2][download][type] = "get"
libraries[json2][download][url] = "https://github.com/douglascrockford/JSON-js/blob/master/json2.js"

libraries[respondjs][download][type] = "get"
libraries[respondjs][download][url] = "https://github.com/scottjehl/Respond/tarball/master"
