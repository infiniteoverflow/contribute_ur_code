//Program to display only Palindrome Words in a sentence

import java.util.*;
class Paln
{
static void teja()
{
Scanner in = new Scanner(System.in);
System.out.println(“Enter the Sentence : “);
while(in.hasNext())
{
String st = in.next();
int l = st.length();
String rev=””;
for(int i=0;i<l;i++)
{
char ch = st.charAt(i);
rev=ch+rev;
}
if(st.equals(rev))
System.out.println(st);
rev=””;
}
}
}
