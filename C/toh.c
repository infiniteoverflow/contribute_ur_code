
#include <stdio.h>

int toh(int n, char s, char a, char d);

int main()
{
	int n, num;
	char s ='S', a = 'A', d ='D'; 
	call:
	{
		printf("Enter the number of disks:\n");
		scanf("%d", &n);
	
		num=toh(n,s,a,d);
	
	}
	
	if(num == -1)
	{
		printf("Number of disks is inavlid.\n");
		goto call;
	}
	else 
		printf("\nSuccessful\n");


	return 0;
}




int toh(int n, char s, char a, char d)
{
	if(n<=0)  //no of disks is invalid.
	{
		//printf("Number of disks is invalid.");
		return -1; 
	} 
	
	if(n==1) //base case
	{
		printf("Taking Disk %d from %c to %c.\n", n,s,d);
		return 1; //succesfull
		
	}

	if(n>1)
		toh(n-1, s, d,a); //left rcursion.
		
	printf("Taking %d Disk from %c to %c.\n",n,s,d);
	
	if(n>1)
		toh(n-1, a,s,d); //right recursion.
	
}

