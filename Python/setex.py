"""
Set is a collection which is unordered and unindexed. No duplicate members.
A set is a collection which is unordered and unindexed. In Python sets are written with curly brackets.
"""
tset = {"apple","mango","banana","banana"}                 #alter tset=set(("apple","mango",...))              
print(tset)                                               #since sets cannot have duplicate values, the other banana is not printed!


#since sets are unindexed, we cannot refer to a particular item

for x in tset:
    print(x)

y = "apple"
if y in tset:
    print(y+" exists in the set!")

#the values of set cannot be changed once created, but we can add new elements to it

tset.add("orange")                                                  #add() adds one element 
print(tset)

tset.update(["orange","strawberry","pineapple"])
print(tset)

#since sets are unindexed, where the items exactly are is unknown!

print("length of set = "+str(len(tset)))

tset.remove("banana")                               #if item does not exists, this will cause an error
print(tset)

tset.discard("banana")                              #if item not present, will not raise an error
print(tset)

tset.pop()                                          #pops a element randomly, coz sets are unindexed so any element from the last is deleted #error if set empty
print(tset)

tset.clear()                                         #clears the set, but existance remains!
print(tset)

del tset                                            #delets the existance of the set
#print(tset)    will raise an error
 
 #STUDY SET FUNCTIONS!


