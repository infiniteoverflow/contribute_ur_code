/*The following program is an implementation of Password Strenth Measurer in C Programming Language. This basic Strenth Checker, checks
the length of the Password Strenth, the presence of Uppercase Character, Lowercase Character, Digits and finally the Special Characters
and if all the criteria are met, then the password strenth is strong otherwise medium or weak. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void check()
{
char pass[100],a=0,b=0,c=0,d=0,e=0,sum=0,i;
char ch;
clrscr();
printf("Enter the password to check its strength: \n");
scanf("%s",pass);
if(strlen(pass)>=8){
a=1;
}
for(i=0;i<strlen(pass);i++){
if(pass[i]>=65 && pass[i]<=90){
b=1;
}
if(pass[i]>=97 && pass[i]<=122){
c=1;
}
if(pass[i]>=48 && pass[i]<=57){
d=1;
}
if(pass[i]=='!'||pass[i]=='@'||pass[i]=='#'||pass[i]=='$'||pass[i]=='%'||pass[i]=='^'||pass[i]=='&'||pass[i]=='*'||pass[i]=='*'||pass[i]=='('||pass[i]==')'||pass[i]=='+'||pass[i]=='-')
{
e=1;
}
}
sum=a+b+c+d+e;
if(sum==5){
printf("Strong Password \n");
}
else if(sum>=3 && sum<=4){
printf("Medium Password \n");
}
else{
printf("Weak Password \n");
}
printf("Do you want to re-check your password [Y/N]? \n");
scanf(" %c",&ch);
if(ch=='Y' || ch=='y'){
system("cls");
check();
}
else{
exit(0);
}
}
void main()
{
check();
getch();
}
