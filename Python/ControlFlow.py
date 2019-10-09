# Python program to learn about control flow

number = 23
guess = int(input('Enter an integer : '))

if guess == number:
    # New block starts here
    print('Congratulations, you guessed it.')
    print('(but you do not win any prizes!)')
    # New block ends here
elif guess < number:
    # Another block
    print('No, it is a little higher than that')
    # You can do whatever you want in a block ...
else:
    print('No, it is a little lower than that')
    # you must have guessed > number to reach here

print('Done')

number = 23
running = True


#You can have an else cause for a while loop
while running:
	guess = int(input('Enter an integer : '))

	if guess == number:
    # New block starts here
	    print('Congratulations, you guessed it.')
	    print('(but you do not win any prizes!)')
	    running = False
	    # New block ends here
	elif guess < number:
	    # Another block
	    print('No, it is a little higher than that')
	    # You can do whatever you want in a block ...
	else:
	    print('No, it is a little lower than that')
	    # you must have guessed > number to reach here
else:
	print('the while loop is over')

print('Done')

#for loop
for i in range (1,5):
	print(i)
else:
	print('the for loop is over')
print(list(range(5)))

while True:
	s = input('Ente somting: ')
	if s == 'quit':
		break
	print('Length of the string is', len(s))
print('Done')

print()

while True:
	s = input('Enter something : ')
	if s == 'quit':
		break
	if len(s) < 3:
		print('too small')
		continue
	print('Input is of sufficent length')


