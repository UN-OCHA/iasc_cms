/**
 * @file
 * Calendar.
 */

(function ($) {

Drupal.behaviors.iascActionPointsExport = {
  attach: function (context) {
    'use strict';

    function _buildOption (text, fn) {
      var button = $('<button type="button">' + Drupal.t(text, {}, {context: 'iasc'}) + '</button>');
      button.on('click', fn);

      return button;
    }

    function _init () {
      $('h1').append(_buildOption('PDF', _exportPDF));
    }

    function _exportPDF () {
      var tableY = 120;
      var docMargin = 40;
      var doc = new jsPDF('l', 'pt');

      var calendar = document.querySelector('.view-iasc-action-points table').cloneNode(true);;

      var spans = calendar.querySelectorAll('span.read-more, span.read-less');
      Array.prototype.forEach.call(spans, function (item) {
        item.remove();
      });

      var spans = calendar.querySelectorAll('span.details');
      Array.prototype.forEach.call(spans, function (item) {
        item.style.display = 'inline';
      });

      var columns = [], rows = [];
      var header = calendar.rows[0];
      for (var i = 0; i < header.cells.length; i++) {
        if (i == 3) {
          continue;
        }
        columns.push({
          title: header.cells[i].innerText.trim(),
          dataKey: 'col' + i
        });
      }

      for (var i = 1; i < calendar.rows.length; i++) {
        var row = {};
        for (var j = 0; j < calendar.rows[i].cells.length; j++) {
          if (j == 3) {
            continue;
          }
          row['col' + j] = calendar.rows[i].cells[j].innerText.trim();
        }
        rows.push(row);
      }

      // Logo.
      var logoData = document.querySelector('header .top img');
      doc.addImage(logoData, 'png', doc.internal.pageSize.width - 258, docMargin, 204, 60);

      // Heading.
      var headingText = 'IASC Action Points';
      doc.setFontSize(18);
      doc.setFontType('bold');
      doc.setTextColor(0,122,192);
      doc.text(headingText, docMargin, 90);

      // Table.
      doc.setFontSize(8);
      doc.autoTable(columns, rows, {
        startY: tableY,
        tableWidth: 'auto',
        styles: {
          overflow: 'linebreak',
          columnWidth: 'wrap',
          fontSize: 8
        },
        columnStyles: {
          'col2': {
            columnWidth: 'auto'
          },
          'col3': {
            columnWidth: 'auto'
          },
          'col4': {
            columnWidth: 'auto'
          },
          'col5': {
            columnWidth: 'auto'
          },
          'col8': {
            columnWidth: 'auto'
          }
        },
        addPageContent: function (data) {
          _getPdfFooter(data, doc);
        }
      });

      // Add page numbers.
      doc.setFontSize(8);
      doc.setFontType('normal');
      var totalPages = doc.internal.getNumberOfPages();
      for (var i = 0; i < totalPages; i++) {
        var realPageNumber = i + 1;
        doc.setPage(realPageNumber);
        doc.text(Drupal.t('Page', {}, {context: 'iasc'}) + ' ' + realPageNumber + '/' + totalPages, docMargin, doc.internal.pageSize.height - 25);
      }

      // Save.
      var fileName = 'action-points-';
      var fileNameHeading = headingText.replace(' – ', '-');
      fileNameHeading = fileNameHeading.replace(',', '');
      fileNameHeading = fileNameHeading.replace(/\s+/g, '-').toLowerCase();
      doc.save(fileName + fileNameHeading + '.pdf');
    }

    function _getPdfFooter (data, doc) {
      var today = new Date();
      var createdAt = Drupal.t('Created', {}, {context: 'iasc'}) + ': ' + today.getFullYear() + '-' + (today.getMonth() + 1) + '-' + today.getDate();
      var poweredBy = Drupal.t('Powered by IASC. https://interagencystandingcommittee.org', {}, {context: 'iasc'});
      doc.setFontSize(8);
      doc.setFontType('normal');
      doc.text(createdAt, doc.internal.pageSize.width - 118, doc.internal.pageSize.height - 35);
      doc.text(poweredBy, doc.internal.pageSize.width - 250, doc.internal.pageSize.height - 25);
    }

    _init();

  }
};

})(jQuery);
