# -*- coding: utf-8 -*-
"""
Created on Sat Jul 28 11:17:58 2018

@author: user
"""

def add(x,y):
    return x + y
def subtract(x,y):
    return x - y
def multiply(x,y):
    return x*y
def division(x,y):
    return x/y
def mushkil(x,y):
    if choice == 1:
        return x+y
    elif choice == 2:
        return x-y
    elif choice == 3:
        return x*y
    elif choice == 4:
        return x/y
def itera():
    e = mushkil(x,y)
    print("Do you want to continue?(Y/N)")
    response = input()
    if response == "Y":
        print("enter third number")
        c = int(input())
        choice = int(input("Select YOur Choice (1,2,3,4)"))
        again(e,c)
        
    elif response == "N":
        exit()
def again(x,y):   
    if choice == 1:
        print(x ,"+", y ,"=", x + y)
        x = x+y
        y = 0
    elif choice == 2:
        print(x ,"-", y ,"= ",x - y)
        x = x-y
        y = 0
    elif choice == 3:
        print(x,"*", y ,"=", x*y)
        x = x*y
        y = 1
    elif choice == 4:
        print(x ,"/", y ,"= ",x/y)
        x = x/y
    else:
        print("Invalid input")
    itera()
print("select oprations")
print("1. Addition")
print("2. Subtraction")
print("3. Multiply")
print("4. Division")

choice = int(input("Please enter your choice 1,2,3,4"))

print('Please enter 1st no.')
x = int(input())
print('Please enter 2nd no.')
y = int(input())
again(x,y)



