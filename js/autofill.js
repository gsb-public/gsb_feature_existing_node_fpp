(function ($) {

  Drupal.behaviors.gsbFeatureExistingNodeFPP = {
    attach: function (context) {

      // Hide the nid field.
      //$('.field-name-field-gsb-existing-node-fpp-nid' ).hide();

      // Set our autocomplete on load.
      Drupal.gsbFeatureExistingNodeFPP.toggleAutocomplete();

    }
  }

  Drupal.gsbFeatureExistingNodeFPP = Drupal.gsbFeatureExistingNodeFPP || {}
  Drupal.gsbFeatureExistingNodeFPP.toggleAutocomplete = function() {

    $(':input[name="field_entity_reference[und][0][value]"]').addClass('form-autocomplete');

    Drupal.behaviors.autocomplete.attach(document);

    // If an item is autocompleted fill the fields.
    $(':input[name="field_entity_reference[und][0][value]"]').blur(function(e) {

      data = $('#autocomplete .selected .item-wrapper').data('info');

      if (data) {

        data = data.split('|');
        nid = data[0];
        title = data[1];

        $(':input[name="field_gsb_existing_node_fpp_nid[und][0][value]"]').val(nid);
        $(':input[name="field_entity_reference[und][0][value]"]').val(title);

      }

    });
  }

})(jQuery);
