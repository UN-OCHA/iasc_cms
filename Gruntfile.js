module.exports = function(grunt) {

  // Load all plugins and tasks defined by the drupal-grunt-starter package.
  require('drupal-grunt-starter/Gruntfile')(grunt);

  // Load all local tasks.
  //grunt.loadTasks(__dirname + '/tasks');

  //grunt.loadNpmTasks("grunt-extend-config");
  //grunt.loadNpmTasks('grunt-wiredep');
//
//  var tasksDefault = [
//    'composer:install',
//    'newer:drushmake:default',
//    'symlink:profiles',
//    'symlink:modules',
//    'symlink:themes',
//    'clean:sites',
//    'symlink:sites',
//    'mkdir:files',
//    'copy:static'
//  ];

  // Re-register the default task with a modified stack.
//  grunt.registerTask('default', tasksDefault);
};
