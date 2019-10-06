from cs50 import get_float
c=int(get_float("Change owed:")*100)

r25=c//25
c=c%25
r10=c//10
c=c%10
r5=c//5
c=c%5
r1=c//1
nc=r1+r5+r10+r25
print(int(nc))