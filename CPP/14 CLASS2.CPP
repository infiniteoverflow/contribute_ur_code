//PROGRAM TO USE CLASSES USING CHARACTERS.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class APPLICANT
{
long ano;
char name[20],grade;
float agg;
void grademe()
{
if(agg>=80)
grade='A';
else if(agg>=65)
grade='B';
else if(agg>=50)
grade='C';
else if(agg<50)
grade='D';
}
public:
void enter()
{
cout<<"\nEnter value of Admission Number  :  ";
cin>>ano;
cout<<"\nEnter Name  :  ";
gets(name);
cout<<"\nEnter Aggregate Marks  :  ";
cin>>agg;
grademe();
}
void result()
{
cout<<"\nAdmission Number  :  "<<ano<<endl;
cout<<"\nName  :  "<<name<<endl;
cout<<"\nAggregate Marks  :  "<<agg<<endl;
cout<<"\nGrade  :  "<<grade<<endl;
}
};
void main()
{
clrscr();
APPLICANT A;
A.enter();
A.result();
getche();
}
