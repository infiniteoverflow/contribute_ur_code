num = int(input("Enter a number: "))


temp = num


def checkarmstrong(temp):
	sum =0 
	while temp > 0:
		digit = temp %10
		sum += digit ** 3
		temp//=10
	if num == sum:
		print(num,"is an Armstrong number")
	else:
		print(num,"is not an Armstrong number")
checkarmstrong(temp)