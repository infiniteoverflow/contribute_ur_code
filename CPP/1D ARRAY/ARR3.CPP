//PROGRAM TO SORT ARRAY WITHOUT FUNCTION.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[]={45,35,85,80,33,27,90},num;
cout<<"\nELEMENTS IN AN ARRAY ARE  :  ";
for(int i=0;i<7;i++)
cout<<ar[i]<<"  ";
cout<<"\n\nENTER NUMBER TO BE SEARCHED  :  ";
cin>>num;
for(i=0;i<7;i++)
if(ar[i]==num)
cout<<"\n\nELEMENT FOUND AT POSITION  :  "<<++i<<endl;
getche();
}