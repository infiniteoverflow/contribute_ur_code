function formatDate(inputDateString) {
    // formats "yyyymmdd" string to "yyyy-mm-dd"
    var dateFormat = /([12]\d{3})(0[1-9]|1[0-2])(0[1-9]|[12]\d|3[01])/;
    return inputDateString.replace(dateFormat, /($1)-($2)-($3)/);
}