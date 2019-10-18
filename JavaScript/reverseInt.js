//Q. Given an integer, return an integer that is the reverse
// ordering of numbers.
// --- Examples
//   reverseInt(-42) === -24
//   reverseInt(-90) === -9

function reverseInt(n) {
	const reversed = n
		.toString()
		.split('')
		.reverse()
		.join('');

	return parseInt(reversed) * Math.sign(n);
}

module.exports = reverseInt;
