//PROGRAM TO REPRESENT MIDDLE ROW FROM 2D ARRAY.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[3][3]={{3,4,5},{5,6,7},{6,7,8}};
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i==3/2)
cout<<ar[i][j]<<"  ";
}
}
getche();
}