//PROGRAM TO COUNT NUMBER OF ALPHABETS IN A FILE STORY.TXT.
#include<fstream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
int count=0;
char ch;
ifstream fin("story.txt",ios::in);
while(!fin.eof())
{
fin>>ch;
if(isalpha(ch))
count++;
}
cout<<"\nNumber of alphabets in a file story.txt are: "<<count;
fin.close();
getche();
}
