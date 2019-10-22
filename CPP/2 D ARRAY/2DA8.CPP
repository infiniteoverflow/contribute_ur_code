//PROGRAM TO DISPLAY SUM OF ROWS.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[3][3]={{3,4,5},{5,6,7},{6,7,8}},sum1=0,sum2=0,sum3=0;
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
if(i==0)
sum1=sum1+ar[i][j];
else if(i==1)
sum2=sum2+ar[i][j];
else if(i==2)
sum3=sum3+ar[i][j];
}
}
cout<<"\nSUM OF VALUES OF FIRST ROW : "<<sum1<<"\n";
cout<<"\nSUM OF VALUES OF SECOND ROW : "<<sum2<<"\n";
cout<<"\nSUM OF VALUES OF THIRD ROW : "<<sum3<<"\n";
getche();
}