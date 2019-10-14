fun main(phrase: String) {
	val aux: CharArray = phrase.toLowerCase().toCharArray() // convert the given phrase to a lowercase char array
	val presence: BooleanArray = BooleanArray(26)			// keep track of the presence of every distinct letter
	
	for(c: Char in aux) {
		if((c.toInt() >= 97) and (c.toInt() <= 122)) // ascii value check (a-z)
			presence[122-c.toInt()] = true
	}

	for(element in presence) {
		if(!element)
			return false
	}

	return true
}
