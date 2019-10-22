//PROGRAM FOR SUM OF MATRICS.
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int a[10][10],b[10][10],c[10][10];
int i,j,m,n,p,q;
cout<<"\nENTER NUMBER OF ROWS AND COLUMNS FOR MATRIX A :   \n";
cin>>m>>n;
cout<<"\nENTER NUMBER OF ROWS AND COLUMNS FOR MATRIX B :   \n";
cin>>p>>q;
if((m==p)&&(n==q))
cout<<"MATRICES CAN BE ADDED";
else
{
cout<<"\nMATRICES CANNOT BE ADDED";
exit(0);
}
cout<<"\nINPUT ELEMENTS OF MATRIX A : \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nINPUT ELEMENTS OF MATRIX B : \n";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cin>>b[i][j];
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];
}
cout<<"\nTHE SUM OF TWO MATRICES IS : \n";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
cout<<c[i][j]<<" ";
}
getche();
}