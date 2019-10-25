echo "Enter a number: "
read num

# Storing the remainder 
s=0 

# Store number in reverse 
# order 
rev=""

# Store original number 
# in another variable 
temp=$num 

while [ $num -gt 0 ] 
do
	# Get Remainder 
	s=$(( $num % 10 )) 
	
	# Get next digit 
	num=$(( $num / 10 )) 
	
	# Store previous number and 
	# current digit in reverse 
	rev=$( echo ${rev}${s} ) 
done

if [ $temp -eq $rev ]; 
then
	echo "Number is palindrome"
else
	echo "Number is NOT palindrome"
fi

