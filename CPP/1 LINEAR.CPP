	//Program for Linear Search in Arrays.
	#include<iostream.h>
	#include<conio.h>
	lsearch(int [],int,int);
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
0	index=lsearch(ar,n,ele);
	if(index==-1)
	cout<<"\nSORRY. \nELEMENT COULD NOT BE FOUND";
	else
	cout<<"\nELEMENT IS FOUND AT POSITION  :  "<<index+1;
	getche();
	}
	lsearch(int ar[],int n,int ele)
	{
	for(int i=0;i<n;i++)
	{
	if(ar[i]==ele)
	return i;
	}
	return -1;
	}
