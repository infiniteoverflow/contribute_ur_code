print "Enter a number :" 
n=gets.chomp    #accepting value from user
x=n.to_i        #converting accepted string value to integer
f=1             
i=1
while i<=x      #loop that calculates factorial
    f=f*i
    i=i+1
end
print "Factorial is : "
print f
print "\n"
