import random
import os

#=======================================================================
# HIGHER OR LOWER GAME
#-----------------------------------------------------------------------
# The idea of this game is simple: Computer will choose a random 
# number. The player's task is to guess that number. The user will 
# continue to guess the value until they guess the right asnwer.
#-----------------------------------------------------------------------

# change these number to make this game easier or harder
# minimum number computer is allowed to choose
min_number = 0 	 

# maximum number computer is allowed to choose
max_number = 100 

# helper functions
new_answer = lambda a,b : random.randint(a,b)

# clear command line
clear = lambda: os.system('cls')

intro  = '\n\n'
intro += '  ██╗  ██╗██╗ ██████╗ ██╗  ██╗███████╗██████╗ \n'
intro += '  ██║  ██║██║██╔════╝ ██║  ██║██╔════╝██╔══██╗\n'
intro += '  ███████║██║██║  ███╗███████║█████╗  ██████╔╝\n'
intro += '  ██╔══██║██║██║   ██║██╔══██║██╔══╝  ██╔══██╗\n'
intro += '  ██║  ██║██║╚██████╔╝██║  ██║███████╗██║  ██║\n'
intro += '  ╚═╝  ╚═╝╚═╝ ╚═════╝ ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝\n'                                            
intro += '               ██████╗ ██████╗                \n'
intro += '              ██╔═══██╗██╔══██╗               \n'
intro += '              ██║   ██║██████╔╝               \n'
intro += '              ██║   ██║██╔══██╗               \n'
intro += '              ╚██████╔╝██║  ██║               \n'
intro += '               ╚═════╝ ╚═╝  ╚═╝               \n'                                            
intro += '  ██╗      ██████╗ ██╗    ██╗███████╗██████╗  \n'
intro += '  ██║     ██╔═══██╗██║    ██║██╔════╝██╔══██╗ \n'
intro += '  ██║     ██║   ██║██║ █╗ ██║█████╗  ██████╔╝ \n'
intro += '  ██║     ██║   ██║██║███╗██║██╔══╝  ██╔══██╗ \n'
intro += '  ███████╗╚██████╔╝╚███╔███╔╝███████╗██║  ██║ \n'
intro += '  ╚══════╝ ╚═════╝  ╚══╝╚══╝ ╚══════╝╚═╝  ╚═╝ \n'

print(intro)
input(" ".join(" " * 8) + "Press ENTER to start...")
clear()

while(True):

	print('Greetings Earthling! I\'m a computer and I know lots of numbers!')
	print('The question is... do you?\n')
	print('Choose your next step carefully:')
	print('[1] Press 1 to start game')
	print('[2] Press 2 to quit')
	
	while(True):
		user_action = (input('\nWhat do you choose you Earthling? ')).strip()
		if(user_action != "1" and user_action != "2"):
			print('Invalid choice! Try again you Earthling')
			continue
		else: break
			
	user_action = int(user_action)
	if(user_action==2):
		print('OK. Quitting...')
		break

	# If user starts a new game, have compuer choose new answer
	answer = new_answer(min_number, max_number)

	# Create a variable counter to keep track of how many times
	# user has tried to guessed the answer
	counter = 0

	# Print instructions to console:
	print("\nI'm thinking of a number between " + str(min_number) + 
		  " and " + str(max_number)+ ".")

	while(True):
		
		# Ask user what they think the answer is
		guess = int(input('What is your guess: '))
		
		# Increment counter by 1
		counter += 1

		# Compare user's guess to computer's answer
		# If user's guess is too low, print "higher"
		if guess < answer:
			print('No, the answer is higher. Guess again!')
			continue
		
		# If user's guess is too high, print "lower"
		elif guess > answer:
			print('No, the answer is lower. Guess again!')
			continue


		# If user's guess matches answer print the number of guesses
		# and end game. Then return to the initial menu with options
		
		else:
			print("=" * 50)
			print('Congratulations! That is correct you small Earthling you!')
			print('It took you ' + str(counter) + ' guesses.')
			print("=" * 50)
			input("press ENTER to continue...\n\n")
			clear()
			break
