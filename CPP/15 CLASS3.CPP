//PROGRAM TO USE CLASSES USING INTEGERS.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class STOCK
{
int icode,qty;
char name[20];
float price,discount;
void finddisc()
{
if(qty<=50)
discount=0;
else if(qty<=100)
discount=5;
else if(qty>100)
discount=10;
}
public:
void buy()
{
cout<<"\nEnter Item Code  :  ";
cin>>icode;
cout<<"\nEnterItem Name  :  ";
gets(name);
cout<<"\nEnter Price of each item :  ";
cin>>price;
cout<<"\nEnter Quantity in Stock  :  ";
cin>>qty;
finddisc();
}
void showall()
{
cout<<"\nItem Code  : "<<icode<<endl;
cout<<"\nItem Name  :  "<<name<<endl;
cout<<"\nPrice of each item  :  "<<price<<endl;
cout<<"\nQuantity in Stock  :  "<<qty<<endl;
cout<<"\nDiscount is  :  "<<discount<<endl;
}
};
void main()
{
clrscr();
STOCK S;
S.buy();
S.showall();
getche();
}


