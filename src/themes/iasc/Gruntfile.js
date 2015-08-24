module.exports = function(grunt) {
  grunt.initConfig({
    watch: {
      options: {
        livereload: true,
      },
      css: {
        files: [
          '**/*.sass',
          '**/*.scss',
        ],
        tasks: ['compass']
      },
      html: {
        files: [
          '**/*.php',
          '**/*.html',
        ]
      },
      configFiles: {
        files: [ 'Gruntfile.js'],
        options: {
          reload: true
        }
      }
    },
    compass: {
      dist: {
        options: {
          sassDir: 'assets/sass',
          cssDir: 'assets/stylesheets',
          outputStyle: 'expanded',
          noLineComments: true

        }
      }
    },
    webfont: {
      icons: {
        src: 'assets/svg/*.svg',
        dest: 'assets/fonts',
        destCss: 'assets/sass/base',
        options: {
          stylesheet: 'scss',
          relativeFontPath: '../fonts',
          htmlDemo: false,
          ie7: true,
          templateOptions: {
            baseClass: 'icons, [class*="icons-"]',
            classPrefix: 'icons-',
          }
        }
      }
    }
  });
  // Load the Grunt plugins.
  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-webfont');

  // Register the default tasks.
  grunt.registerTask('default', ['watch']);
};