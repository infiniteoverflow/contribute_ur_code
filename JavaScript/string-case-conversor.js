function snake_case(str) {
  return str
    .trim()
    .replace(/\s/gi, "_")
    .replace(
      /[a-z][A-Z]/g,
      str =>
        str.charAt(0).toLocaleLowerCase() +
        "_" +
        str.charAt(1).toLocaleLowerCase()
    )
    .toLocaleLowerCase()
}

function camelCase(str) {
  return str
    .toLocaleLowerCase()
    .trim()
    .replace(/\s*\b\S/gi, str => str.toLocaleUpperCase().trim())
    .replace(/_\S/gi, str => str.charAt(1).toLocaleUpperCase())
}

function PascalCase(str) {
  return str
    .toLocaleLowerCase()
    .trim()
    .replace(/^\S/gi, str => str.toLocaleUpperCase().trim())
    .replace(/\s*\b\S/gi, str => str.toLocaleUpperCase().trim())
    .replace(/_\S/, str => str.charAt(1).toLocaleUpperCase())
}
