#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,pos,n,a[20],temp=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the element of array:");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);  
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			  pos=j;
		}
		if(pos != i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
	printf("Sorted array:");
	for(i=0;i<n;i++)
	    printf("%d ",a[i]);	  
	return 0;
}


