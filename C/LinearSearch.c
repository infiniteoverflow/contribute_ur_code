#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i,n,pos=-1,key;
printf("Enter the number of elements in the given linear list:\n");
scanf("%d",&n);
printf("Enter the elements in the list:\n");
for(i=0;i<n;i++)
{
	printf("Enter the element no.%d:",i+1);
 scanf("%d",&a[i]);	
}
printf("Enter the element to be searched:\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
pos=i;
break;
}
}
if(pos==-1)
{
printf("Element not found!!\n");
}
else
{
printf("The position of the element is:%d\nindex value is :%d\n",pos+1,pos);
}
}


