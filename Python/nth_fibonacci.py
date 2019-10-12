#Python Program to calculate the nth Fibonacci Number

from math import sqrt
def fibonacci(n):
    return int(1/sqrt(5)*(((1+sqrt(5))/2)**n - ((1-sqrt(5))/2)**n))

your_number=int(input("Enter the value so that we can calculate its corresponding Fibonacci Number:"))
print(fibonacci(your_number))
