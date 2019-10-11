#include <stdio.h>


int main()
{
   int n, m, digit, rev;
   printf("Enter the number ");
   scanf("%d",&n);
   m = n;
   rev = 0;
   while(n!=0)
   {
       digit = n % 10;
       rev = rev*10 + digit;
       n = n/10;

   }
   if(m==rev)
   {

       printf("The given number is a palindrome i.e %d = %d",m,rev);
   }
   else
   {
       printf("The given number is not a palindrome i.e %d != %d",m,rev);
   }
}
