//PROGRAM TO SHIFT ELEMENTS OF AN ARRAY TO THEIR NEXT POSITION.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[]={22,25,70,32,12},temp=ar[0];
cout<<"\nELEMENTS IN AN ARRAY ARE  :  ";
for(int i=0;i<5;i++)
cout<<ar[i]<<"  ";
cout<<"\n\nOUTPUT OF THE ARRAY IS   :   ";
for(i=1;i<5;i++)
ar[i-1]=ar[i];
ar[4]=temp;
for(i=0;i<5;i++)
cout<<ar[i]<<"  ";
getche();
}