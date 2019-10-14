
//Check if Int Array contains a given value

fun main(args: Array<String>) {
    val num = intArrayOf(1, 2, 3, 4, 5)
    val toFind = 3
    var found = false
    for (n in num) {
        if (n == toFind) {
            found = true
            break
        }
    }
    if (found)
        println("$toFind is found.")
    else
        println("$toFind is not found.")
}