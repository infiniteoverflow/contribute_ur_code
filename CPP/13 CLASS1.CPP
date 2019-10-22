//PROGRAM TO USE CLASSES USING STRING VALUES.
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class PHOTO
{
int pno;
char category[20],exhibit[20];
void fixexhibit()
{
if(strcmp(category,"Antique")==0)
strcpy(exhibit,"Zaveri");
else if(strcmp(category,"Modern")==0)
strcpy(exhibit,"Johnsen");
else if(strcmp(category,"Classic")==0)
strcpy(exhibit,"Terenida");
}
public:
void Register()
{
cout<<"\nEnter value of Photo Number  :  ";
cin>>pno;
cout<<"\nEnter value of Photo Category  :  ";
gets(category);
fixexhibit();
}
void viewall()
{
cout<<"\nPhoto Number  :  "<<pno<<endl;
cout<<"\nPhoto Category  :  "<<category<<endl;
cout<<"\nExhibition Gallery  :  "<<exhibit<<endl;
}
};
void main()
{
clrscr();
PHOTO P;
P.Register();
P.viewall();
getche();
}

