#include <stdio.h>
#include<conio.h>

int main() {
	int no,n[]={},i,j;
	scanf("%d",&n);
    printf("hello");
	for(i=0;i<no;i++)
	 {
	      scanf("%d",&n[i]);
	 }
for (i = 0; i < no; ++i) 
        {
 
            for (j = i + 1; j < no; ++j)
            {
 
                if (n[i] > n[j]) 
                {
 
                    a =  n[i];
                    n[i] = n[j];
                    n[j] = a;
 
                }
 
            }
 
        }
 
	
	return 0;
}