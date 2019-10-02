#Python variables,constants etc.
website='Apple.com'
print(website)
#changing value of variables
website='happiness.com'
print(website)
#assigning multiple values to multiple variables
a,b,c=1,5.2,'happy'
print(a)
print(b)
print(c)
#assigning same values to multiple variables
j=k=l='same'
print(j)
print(k)
print(l)
#Numeric literals
x = 0b1010#binary
y = 100#decimal
z = 0o310#octal
w = 0x12c#hexadecimal
#floating point numbers
float_1 = 16.04
float_2 = 12e4
#complex literals
i = 15j
print(x,y,z,w)
print(float_1,float_2)
print(i,i.imag,i.real)
#string literals
g="This is a string"
h='This is also a string'
i='c'
j="""This is a
multiline string"""
unicode=u"\u00dcnic\u00f6de"#unicode string literal for special characters like u ke upar dots
raw_str=r"Raw \n string"#uses \ as any other character
print(g)
print(h)
print(i)
print(j)
print(unicode)
print(raw_str)
#boolean literal
p = (1 == True)
q = (1 == False)#syntax capital letter important
r = True + 2
s = False + 10
print("p is",p)
print("q is",q)
print("r:",r)
print("s:",s)
#special literals
drink = "Available"
food = None#none is special literal
def menu(x):#defining the function
    if x==drink:
        print(drink)
    else:
        print(food)
menu(drink)
menu(food)
#literal collections
fruits =['apples','bananas','grapes']#list
numbers =(1,2,3)#tuple
alphabets ={'a':'apple','b':'bananas','c':'cherry'}#dictionaries
vowels ={'a','e','i','o','u'}#set
print(fruits)
print(numbers)
print(alphabets)
print(vowels)
#multi-line statements
a="""This is
a multi-line
statement"""
print(a)
b='1' + '2' + '3' +\
    '4' + '5' +\
    '6'
print(b)
c=('7'+'8' +
    '9'+'10')
print(c)
