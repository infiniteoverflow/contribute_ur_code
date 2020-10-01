/// Calculate the nth fibbonacci number
/// - Parameter index: the fibbonacci number to calculate
/// - Returns: the fibbonacci number
func fibonacci(_ index: Int) -> Int {

    if index < 2 {
        return index
    }

    var i = 2
    var next1 = 0
    var next2 = 1

    while i <= index {
        let next = next1 + next2
        next1 = next2
        next2 = next
        i += 1
    }

    return next2
}

/// Calculate up to the nth fibbonacci number
/// - Parameter index: the fibbonacci number to calculate
/// - Returns: the array of fibbonacci numbers
func fibonacciArray(_ index: Int) -> [Int] {
    var result = [Int]()
    if index >= 0 {
        result.append(0)
    }
    if index >= 1 {
        result.append(1)
    }

    while result.count < index {
        let first = result[result.count - 1]
        let second = result[result.count - 2]
        result.append(first + second)
    }

    return result
}