//SQUARING OF NUMBERS IN ARRAY.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[]={2,3,4,5,6};
cout<<"\n\nTHE ELEMENTS IN ARRAY ARE  :  ";
for(int i=0;i<5;i++)
cout<<ar[i]<<"  ";
cout<<"\n\nSQUARES OF GIVEN ELEMENTS IN ARRAY ARE  :  ";
for(i=0;i<5;i++)
cout<<ar[i]*ar[i]<<"  ";
getche();
}