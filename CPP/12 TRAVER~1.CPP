//PROGRAM TO SHOW TRAVERSAL IN ARRAY.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[10],n;
clrscr();
cout<<"\nEnter the number of elements :  \n";
cin>>n;
cout<<"\nEnter elements  :  \n";
for(int i=0; i<n; i++)
cin>>ar[i];
cout<<"\nEntered array is  :  \n";
for(i=0; i<n; i++)
cout<<ar[i]<<"\n";
getche();
}
