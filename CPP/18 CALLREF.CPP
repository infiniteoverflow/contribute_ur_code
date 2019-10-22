//PROGRAM FOR CALL BY VALUE
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
void change(int &);
int a=10;
cout<<"\nVALUE OF A IS  : "<<a<<endl;
change(a);
cout<<"\nVALUE OF A AFTER FUNCTION change() IS  : "<<a<<endl;
getche();
}
void change(int &a)
{
a=20;
cout<<"\nVALUE OF A IN FUNCTION change() IS   : "<<a<<endl;
}