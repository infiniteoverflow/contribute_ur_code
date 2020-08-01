

t=int(input())
for i in range(t):
    count=0
    n,k=map(int,input().split())
    for j in range(n):
        li=list(map(str,input().split()))
        l=len(li)
        for ind in range(l):
            if(li[ind]=="P"):
                if((ind-k)>=0 and ind+k<=l-1):
                    for s in range(ind-k,ind+k+1):
                        if(li[s]=="T"):
                            count+=1
                            li[s]="X"
                            break
                elif((ind-k)<0 and ind+k<=l-1):
                    for s in range(ind+1,ind+k+1):
                        if(li[s]=="T"):
                            count+=1
                            li[s]="X"
                            break
                elif((ind-k)>=0 and ind+k>l-1):
                    for s in range(ind-k,ind):
                        if(li[s]=="T"):
                            count+=1
                            li[s]="X"
                            break
    print(count)
