//Program for Binary Search.
#include<iostream.h>
#include<conio.h>
bsearch(int [],int,int);
void main()
{
clrscr();
int ar[20],ele,n,index;
cout<<"\nENTER NUMBER OF ARRAY ELEMENTS  :  ";
cin>>n;
cout<<"\nENTER ARRAY ELEMENTS  : \n";
for(int i=0;i<n;i++)
cin>>ar[i];
cout<<"\nENTER ELEMENT TO BE SEARCHED  :  ";
cin>>ele;
index=bsearch(ar,n,ele);
if(index==-1)
cout<<"\nSORRY. \nELEMENT COULD NOT BE FOUND";
else
cout<<"\nELEMENT IS FOUND AT POSITION  :  "<<index+1;
getche();
}
bsearch(int ar[],int size,int ele)
{
int beg=0,last=size-1,mid;
while(beg<=last)
{
mid=(beg+last)/2;
if(ele==ar[mid])
return mid;
else if(ele>ar[mid])
beg=mid+1;
else
last=mid-1;
}
return -1;
}
