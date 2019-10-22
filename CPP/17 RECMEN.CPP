//PROGRAM TO DISPLAY A MENU REGARDING RECTANGLE OPERATIONS AND PERFORMING
//ACCORDING TO USER'S RESPONSE.
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<process.h>
void main()
{
clrscr();
int n;
float l,b,pm,ar,diag;
do
{
cout<<"\nRECTANGLE MENU :  ";
cout<<"\n1. AREA ";
cout<<"\n2. PERIMETER ";
cout<<"\n3. DIAGONAL ";
cout<<"\n4. EXIT ";
cout<<"\n\n\nENTER YOUR CHOICE  :  ";
cin>>n;
if(n==1||n==2||n==3)
{
cout<<"\nENTER LENGTH AND BREADTH OF RECTANGLE :  \n";
cin>>l>>b;
}
switch(n)
{
case 1 : ar=l*b;
	 cout<<"\nAREA OF RECTANGLE  :  "<<ar<<endl;
	 break;
case 2 : pm=2*(l+b);
	 cout<<"\nPERIMETER OF RECTANGLE :  "<<pm<<endl;
	 break;
case 3 : diag=sqrt(l*l+b*b);
	 cout<<"\nDIAGONAL OF RECTANGLE :  "<<diag<<endl;
	 break;
case 4 : exit(0);
default : cout<<"\nWRONG CHOICE! ";
	  break;
}
}while(n>=1 && n<=3);
getche();
}
