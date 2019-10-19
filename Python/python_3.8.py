# cool new features of python 3.8

# walrus operator
print(walrus := True)

inputs = list()
while (current := input("Write something: ")) != "quit":
    inputs.append(current)

# positional only arguments
def incr(x, /):
    return x + 1

incr(3.8) # ok
incr(x=3.8) # error