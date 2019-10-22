//PROGRAM TO COUNT NUMBER OF LINES IN FILE STORY.TXT.
#include<fstream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
int count=0;
char line[200];
ifstream fin("story.txt",ios::in);
while(!fin.eof())
{
fin.getline(line,200);
count++;
}
cout<<"\nNumber of lines in a file story.txt are: "<<count;
fin.close();
getche();
}