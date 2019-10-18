n,p = list(map(int,input().split()))
if (n>=0 and p>=0):
    ls = list(str(n))
    sum = 0
    c = p
    for num in range(0,len(ls)):
        sum = sum + (int(ls[num]))**c
        c+=1
    k = sum/n
    if(sum%n == 0 and k*n == sum):
        print(int(k))
    else:
        print(-1)
