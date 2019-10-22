




//PROGRAM TO DISPLAY THAT ALL EVEN POSITIONS OF THE ARRAY SHOULD BE
//ADDED WITH THE CONTENT OF THE ELEMENT IN THE NEXT POSITION AND ODD POSITIONS
//ELEMENTS SHOULD  BE INCREMENTED BY 10   (2017 OD)
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[]={45,34,85,80,33,27,90},num;
cout<<"\nELEMENTS IN AN ARRAY ARE  :  ";
for(int i=0;i<7;i++)
cout<<ar[i]<<"  ";
cout<<"\n\nOUTPUT OF THE ARRAY ARE  :  ";
for(i=0;i<7;i++)
{
if(i%2==0)
ar[i]+=ar[i+1];
else
ar[i]+=10;
}
for(i=0;i<7;i++)
cout<<ar[i]<<"  ";
getche();
}