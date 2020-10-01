extension String {

    /**
     Case sensitive Anagram
     */
    var isAnagram: Bool {
        let array = Array(self)
        let lastIndex = array.count - 1
        for i in 0..<array.count / 2 {
            print("comparing \(i): \(array[i]) - \(array[lastIndex-i])")
            if array[i] != array[lastIndex - i] {
                return false
            }
        }
        return true
    }

    /**
     Case insensitive Anagram
     */
    var isAnagramCI: Bool {
        self.lowercased().isAnagram
    }
}