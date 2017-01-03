var $ = require('gulp-load-plugins')();
var inky = require('inky');
var gulp = require('gulp');
var lazypipe = require('lazypipe');
var deject = require('gulp-remove-html');
var argv = require('minimist')(process.argv.slice(2));

// Adapted from https://github.com/zurb/foundation-emails/blob/develop/gulpfile.js#L205
function inliner() {
  var pipe = lazypipe()
    .pipe($.inlineCss, {
      applyStyleTags: false,
      removeStyleTags: false,
      removeLinkTags: false
    })
    .pipe($.htmlmin, {
      collapseWhitespace: false,
      minifyCSS: false
    });

  return pipe();
}

gulp.task('default', function() {
  var base_dir = process.cwd();
  if (argv.directory) {
    process.chdir(argv.directory);
  }
  return gulp.src(['inky_templates/*.html.twig', '!inky_templates/_*.html.twig'])
    .pipe($.wrap({ src: 'inky_templates/_wrap.html.twig' }, { base_dir: base_dir }))
    .pipe(inky())
    .pipe(inliner())
    .pipe(deject())
    .pipe($.prettify({ indent_size: 2 }))
    .pipe(gulp.dest('templates'));
});
