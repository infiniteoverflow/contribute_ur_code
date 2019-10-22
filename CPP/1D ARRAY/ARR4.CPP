//PROGRAM TO SWAP FIRST AND LAST ELEMENT IN ARRAY
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[]={45,35,85,80,33,27,90},temp;
cout<<"\nELEMENTS IN AN ARRAY ARE  :  ";
for(int i=0;i<7;i++)
cout<<ar[i]<<"  ";
for(i=0;i<7;i++)
{
temp=ar[0];
ar[0]=ar[6];
ar[6]=temp;
}
cout<<"\n\nELEMENT OF ARRAY AFTER SWAPPING FIRST AND LAST ELEMENT OF ARRAY ARE :  \n\n";
for(i=0;i<7;i++)
cout<<ar[i]<<"  ";
getche();
}