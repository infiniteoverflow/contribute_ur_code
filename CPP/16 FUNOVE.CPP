//PROGRAM FOR FUNCTION OVERLOADING
#include<iostream.h>
#include<conio.h>
float area(float l,float b)
{
return (l*b);
}
float area(float r)
{
return (22*r*r)/7;
}
void main()
{
clrscr();
cout<<"\nAREA OF A RECTANGLE  :  "<<area(3.2,4)<<" SQ.CM"<<endl;
cout<<"\nAREA OF A CIRCLE  :  "<<area(3.2)<<" SQ.CM"<<endl;
getche();
}