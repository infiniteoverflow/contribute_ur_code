//PROGRAM TO SHIFT ELEMENTS OF AN ARRAY TO THEIR NEXT POSITION.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[]={90,56,45,20,34,54},temp;
cout<<"\nELEMENTS IN AN ARRAY ARE  :  ";
for(int i=0;i<6;i++)
cout<<ar[i]<<"  ";
cout<<"\n\nOUTPUT OF THE ARRAY IS   :   ";
for(i=0;i<6;i+=2)
{
temp=ar[i];
ar[i]=ar[i+1];
ar[i+1]=temp;
}
for(i=0;i<6;i++)
cout<<ar[i]<<"  ";
getche();
}