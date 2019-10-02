# Find the Nth Fibonacci Number

class Solution:
    def fib(self, N: int) -> int:
        if N <= 1:
            return N
        previous, current = 0, 1
        for _ in range(N - 1):
            new_current = previous + current
            previous, current = current, new_current
        return current
