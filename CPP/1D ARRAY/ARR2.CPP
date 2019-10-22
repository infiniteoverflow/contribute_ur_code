//PROGRAM TO SORT ARRAY WITHOUT FUNCTION.
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
for(int j=0;j<6;j++)
{
if(ar[j]>ar[j+1])
{
temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;
}
}
cout<<"\nSORTED ARRAY IS  :  ";
for(j=0;j<7;j++)
cout<<ar[j]<<"  ";
}
getche();
}