//PROGRAM TO DISPLAY EVEN AND ODD NUMBERS FROM 1D ARRAY
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[6];
cout<<"\nENTER ANY 6 NUMBERS  :  \n";
for(int i=0;i<6;i++)
cin>>ar[i];
cout<<"\n\nEVEN NUMBERS ARE  :  ";
for(i=0;i<6;i++)
{
if(ar[i]%2==0)
cout<<ar[i]<<"  " ;
}
cout<<"\n\nODD NUMBERS ARE  :  ";
for(i=0;i<6;i++)
{
if(ar[i]%2!=0)
cout<<ar[i]<<"  ";
}
getche();
}
