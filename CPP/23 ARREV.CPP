//PROGRAM TO DISPLAY REVERSE OF NUMBERS IN ARRAY.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[6]={3,5,7,8,11,12};
cout<<"\n\nTHE ELEMENTS IN ARRAY ARE  :  ";
for(int i=0;i<6;i++)
cout<<ar[i]<<"   ";
cout<<"\n\nELEMENTS OF ARRAY IN REVERSE ORDR ARE  :  ";
for(i=5;i>=0;i--)
cout<<ar[i]<<"   ";
getche();
}