//PROGRAM TO REPRESENT DIAGONALS OF 2D ARRAY.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[3][3]={{3,4,5},{5,6,7},{6,7,8}};
cout<<"\n\nDIAGONAL 1 :  ";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i==j)
cout<<ar[i][j]<<"  ";
}
}
cout<<"\n\nDIAGONAL 2 :  ";
for(i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i+j==2)
cout<<ar[i][j]<<"  ";
}
}
getche();
}