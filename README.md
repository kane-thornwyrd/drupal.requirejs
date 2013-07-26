# Require.JS *Drupal Module*

Posted by [David Snopek](mailto:dsnopek@gmail.com) on October 15, 2011 at 5:04pm:
> Allows other modules to use require.js to write sophisticated JavaScript
> applications.
>
> Depends on filesondemand and libraries.
>
> This is an API module. Only install it if another module asks you to!
>
> Documentation is forth-coming! For now, all I can recommend is checking out the
> 'requirejs_example' module that comes with this module.

## TODO (2011-10-15):

 * Add the jquery stub (can we stub jquery ui too?)
 * Admin page:
   - Enable/disable the optimizr
   - Configure path to optimizer
   - Clear cached optimized files
 * Cached files should be cleared by the normal mechanism (especially Drush)
 * Documentation
   - How to install and configure
   - Be careful with filenames and .js!
   - hooks
   - Public function API documentation
   - Include an example module (requirejs_example)
