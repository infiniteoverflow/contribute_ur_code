//PROGRAM TO COUNT NUMBER OF WORDS IN FILE STORY.TXT.
#include<fstream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
int count=0;
char word[20];
ifstream fin("story.txt",ios::in);
while(!fin.eof())
{
fin>>word;
if(word[0]=='A'||word[0]=='a')
count++;
}
cout<<"\nNumber of words starting with letter A in a file story.txt are: "<<count;
fin.close();
getche();
}