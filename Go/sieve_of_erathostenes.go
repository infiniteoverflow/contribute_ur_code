package main

import (
	"fmt"
)

func sieveOfErathostenes(n int) {
	if n < 1 {
		fmt.Println("Error: n must be an int greater than or equal to 1")
	}

	// We first create a list of length n filled with `true`
	list := make([]bool, n)
	for i := range list {
		list[i] = true
	}

	// 0 and 1 are not primes
	list[0] = false
	list[1] = false

	// We iterate over the list as long as the squared of the current index is smaller or equal to n
	for p := 2; p*p <= n; p++ {
		// If the flag at the current index is unchanged, we iterate over its multiples toggling the flag
		if list[p] {
			for i := 2 * p; i < n; i += p {
				list[i] = false
			}
		}
	}

	// The numbers where the flag is still `true` are the prime numbers below `n`
	fmt.Printf("The prime numbers smaller than %d are:\n", n)
	for i, v := range list {
		if v {
			fmt.Printf("%d ", i)
		}
	}
	fmt.Println()
	return
}

func main() {
	sieveOfErathostenes(30)
}
