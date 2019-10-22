//Program for Bubble Sort in Arrays.
#include<iostream.h>
#include<conio.h>
void bubble(int [],int);
void main()
{
clrscr();
int ar[20],n;
cout<<"\nNUMBER OF ELEMENTS TO BE ENTERED  :  ";
cin>>n;
cout<<"\nENTER ELEMENTS  :  \n";
for(int i=0;i<n;i++)
cin>>ar[i];
bubble(ar,n);
cout<<"\nTHE SORTED ARRY IS   :  \n";
for(i=0;i<n;i++)
cout<<ar[i]<<" ";
cout<<endl;
getche();
}
void bubble(int ar[],int n)
{
int temp,pass=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<(n-1);j++)
{
if(ar[j]>ar[j+1])
{
temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;
}
}
cout<<"ARRAY AFTER ITERATION   "<<++pass<<"  :  ";
for(int k=0;k<n;k++)
cout<<ar[k]<<" ";
cout<<endl;
}
}