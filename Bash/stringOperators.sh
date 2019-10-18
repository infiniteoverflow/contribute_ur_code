string_null=""
string1="string1"
 
if [ $string_null -n ]
then
        echo "not null string"
else
        echo "null string"
fi
 
if [ $string_null -z ]
then
        echo "null string"
else
        echo "not null string"
fi
 
if [ "$string_null" == "$string1" ]
then
        echo "strings equal"
else
        echo "strings not equal"
fi
 
if [ "$string_null" != "$string1" ]
then
        echo "strings not equal"
else
        echo "strings equal"
fi