//PROGRAM TO SWAP FIRST AND LAST ROW OF 2D ARRAY.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[3][3]={{3,4,5},{5,6,7},{6,7,8}},temp;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<ar[i][j]<<"  ";
cout<<endl;
}
cout<<"\n\nSWAPPING FIRST AND LAST ROW OF 2D ARRAY  :  \n";
for( i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
temp=ar[0][j];
ar[0][j]=ar[2][j];
ar[2][j]=temp;
}
}
for(i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<ar[i][j]<<"  ";
cout<<endl;
}
getche();
}