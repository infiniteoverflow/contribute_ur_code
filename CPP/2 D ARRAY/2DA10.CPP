//PROGRAM TO DISPLAY SUM OF ALL VALUES OF ARRAY.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[3][3]={{3,4,5},{5,6,7},{6,7,8}},sum=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<ar[i][j]<<"  ";
cout<<endl;
}
for( i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
sum=sum+ar[i][j];
}
}
cout<<"\nSUM OF ALL VALUES OF ARRAY : "<<sum<<"\n";
getche();
}