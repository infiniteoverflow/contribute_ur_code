s=int(input("enter a number"))
n=s
sum1=0
while (s!=0):
    r=s%10
    sum1+=r**3
    s=int(s/10)
if sum1==n:
    print("armstrong number")
else:
    print("not an armstrong number")
