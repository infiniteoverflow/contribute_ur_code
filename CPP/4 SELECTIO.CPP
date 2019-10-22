//Program for Selection Sort in Arrays.
#include<iostream.h>
#include<conio.h>
void select(int [],int);
void main()
{
clrscr();
int ar[20],n;
cout<<"\nNUMBER OF ELEMENTS TO BE ENTERED  :  ";
cin>>n;
cout<<"\nENTER ELEMENTS  :  \n";
for(int i=0;i<n;i++)
cin>>ar[i];
select(ar,n);
cout<<"\nTHE SORTED ARRY IS   :  \n";
for(i=0;i<n;i++)
cout<<ar[i]<<" ";
cout<<endl;
getche();
}
void select(int ar[],int n)
{
int small,temp,pos;
for(int i=0;i<n-1;i++)
{
small=ar[i];
pos=i;
for(int j=i+1;j<n;j++)
{
if(ar[j]<small)
{
small=ar[j];
pos=j;
}
}
temp=ar[i];
ar[i]=ar[pos];
ar[pos]=temp;
cout<<"\nARRAY AFTER PASS  "<<i+1<<"  :  ";
for(j=0;j<n;j++)
cout<<ar[j]<<" ";
}
}
