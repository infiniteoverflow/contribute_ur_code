//PROGRAM TO INCREASE VALUE OF 5 TO THOSE SCORES WHICH ARE LESS THAN 40.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[]={45,35,85,80,33,27,90};
cout<<"\nELEMENTS IN AN ARRAY ARE  :  ";
for(int i=0;i<7;i++)
cout<<ar[i]<<"  ";
cout<<"\n\nOUTPUT OF THE ARRAY IS   :   ";
for(i=0;i<7;i++)
{
if(ar[i]<40)
ar[i]=ar[i]+5;
}
for(i=0;i<7;i++)
cout<<ar[i]<<"  ";
getche();
}