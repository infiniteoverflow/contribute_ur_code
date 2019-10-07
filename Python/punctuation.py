str = input("Enter a string: ")
punc = ['.',',','?','!',';']
for i in range(0,len(str)):
    for j in range(0,len(punc)):
        if(str[i] in punc):
            str=str.replace(punc[j]," ")
print(str)

'''
Output:-
Enter a string: Hello World! This is, a test.
Hello World  This is  a test
'''