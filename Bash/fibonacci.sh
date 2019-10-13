#!/bin/bash

function fibonacci {
    : '
    This function will return n-th fibonacci number.
        input:  integer
        output: integer

    Function Description: 
        f(n) = f(n - 1) + f(n - 2)
        f(0) = 0, f(1) = 1
    
    Time Complexity: O(n)
    Space Complexity O(1)
    '

	n=$1
	if [ $n -eq 1 ]; then
		return 0
	elif [ $n -eq 2 ]; then
		return 1
	else
		a=0; b=1; res=1;
		for ((i=3; i<=n; i++)); do
			((res = a + b))
			a=$b; b=$res;
		done
		return $res
	fi
}

# User input with message
read -p "Enter any number " num

# nth Fibonacci number
fibonacci $num res
echo "Fibonacci number is : $res"
