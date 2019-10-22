//PROGRAM TO DISPLAY ALTERNATE ELEMENTS OF ARRAY.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[3][3]={{3,4,5},{5,6,7},{6,7,8}};
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<ar[i][j]<<"  ";
cout<<endl;
}
cout<<"\nALTERNATE ELEMENTS IN AN ARRAY STARTING FROM AR[0][0] ARE  :  \n\n ";
for( i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if((i+j)%2==0)
cout<<ar[i][j]<<"  ";
}
}
getche();
}
