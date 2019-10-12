/* The following program is an implementation of the popular Anangram problem wherein if two words are formed off the same set of
characters, they can be called as anagrams. Example of anagrams are 'tab' and 'bat' which are formed off the same set of characters
{a,b,t}. Hence here is an implementation of the Anagrams problem which calculates the sum of value of ASCII characters to check if
two words are Anangram or not. */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
  char word[100], word1[100];
  int l1, l2, i, s1 = 0, s2 = 0;
  printf("*************Program to Check for Anangrams*************\n");
  printf("Enter the first word: \n");
  gets(word);
  printf("Enter the second word: \n");
  gets(word1);
  l1 = strlen(word);
  l2 = strlen(word1);
  for (i = 0; i < l1; i++) {
    s1 = s1 + (int) word[i];
  }
  for (i = 0; i < l2; i++) {
    s2 = s2 + (int) word1[i];
  }
  if (s1 == s2) {
    printf("The words are Anagrams! \n");
  } else {
    printf("The Words are not Anagrams! \n");
  }
  getch();
}
