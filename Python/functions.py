#inputs from user
xh=input("Enter hours:")
xr=input("Enter rate:")
xp=float(xh)*float(xr)
print("Pay:",xp)
if xp>40:
    print("overflow")
else:
    print("regular")
#using functions
def one():
  print("Hello")
  print("world")
print(":)")
one()
#using built-in functions
big=max("helloworld")
print(big)
small=min("helloworld")
print(small)