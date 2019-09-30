"""
List is a collection that is ordered and changeable, it allows duplicate members!
List are written in square brackets []
List is same as arrays in python.
#LIST ALSO SUPPORTS SLICING
"""
mlist = ["apple","banana","orange","mango","banana","apple"] #alter mlist = list(("apple","banana",....)) #list() is a constructor
print(mlist)
mlist[3]="big mango"
print(mlist)
count = 0
for x in mlist:                                     #loop through a list
    print(x)
    count+=1
print("Total item = "+str(count))                   #count using loop
print("Length of list = "+str(len(mlist)))          #built in for length of list
mlist.append("mango")                                #adds in end,maintains order.
print(mlist)
mlist.insert(2,"blackcurrant")                       #adds at speicific pos, all elements shifted right
print(mlist)
c = mlist.count("banana")                            #tells number of occurences of banana
print(c)
if("apple" in mlist):
    print("yes apple exists in mlist!")
mlist.remove("banana")                               #removes first occurence banana
print(mlist)
mlist.pop()                                          #removes last if index not specified
print(mlist)
mlist.pop(3)                                         #removes specific index
print(mlist)
del mlist[0]                                        #removes the first element
print(mlist)
del mlist                                           #removes entire list
#print(mlist) will throw error, its existance is deleted
nlist=["pepsi","coke","sprite","coke"]
print(nlist)
nlist.clear()                                       #removes all items from list,but the list existance remains
print(nlist)
nlist=["pepsi","coke","sprite"]
mlist = nlist.copy()          #alter mlist=list(nlist)                      #copies nlist to mlist
print(nlist)
print(mlist)
mlist.reverse()                                     #To reverse the order
print(mlist)
mlist.sort()                                        #sorts on ASCII
print(mlist)

y=mlist.index("coke")                               #returns the first occurence index of coke
print(y)

mlist = ["apple","banana","orange","mango","banana","apple"]
print(len(mlist))       #Prints the length
print(sum(mlist))       #Prints the sum.
print(max(mlist))       #Prints the max element
print(min(mlist))       #Prints the min element