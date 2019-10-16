n = int(input("Enter a number:"))
a = []
while(n>0):
    rem = n%2
    a.append(rem)
    n = n//2
a.reverse()
print("Binary equivalent is:",a)
