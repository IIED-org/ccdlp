/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.ialp = {
  attach: function(context, settings) {
    $('#search-toggle').click(function(e) {
      e.stopPropagation();
      $('#block-views-exp-taxonomy-search-page-2').animate({
          height: 'toggle',
          visibility: 'visible',
        },500);
    });
    $(document).click(function(e) {
      $target = $(e.target);
      if(!$('body').hasClass('page-search'))   {
        if(!$target.closest('#block-views-exp-taxonomy-search-page-2').length &&
        $('#block-views-exp-taxonomy-search-page-2').is(":visible")) {
          $('#block-views-exp-taxonomy-search-page-2').hide();
        }
      }
    });
  }
};


})(jQuery, Drupal, this, this.document);
