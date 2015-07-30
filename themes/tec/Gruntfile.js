module.exports = function (grunt) {
  require('load-grunt-tasks')(grunt);

  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),

    sass: {
      dist: {
        options: {
          outputStyle: 'compressed',
          includePaths: ['scss']
        },
        files: {
          'css/tec.css': 'scss/tec.scss'
        }
      }
    },

    watch: {
      grunt: {files: ['Gruntfile.js']},

      sass: {
        files: 'scss/**/*.scss',
        tasks: ['sass']
      }

    }
  });

  grunt.registerTask('default', ['watch']);
};