#include<stdio.h>
int binarySearch(int[],int,int,int);
int main(){
	int n1,n2,i,j=0,k=0,item,count=0;
	printf("enter number of elements in 1st array\n");
	scanf("%d",&n1);
	printf("enter number of elements in 2nd array\n");
	scanf("%d",&n2);
	int a[n1],b[n2];
	printf("enter values of 1st array (sorted)\n");
	for (i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the values of 2nd array (sorted)\n");
	for (i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++){
		item = a[i];
		if(binarySearch(b,0,n2,item) == 1){
			count++;
		}
	}
	int m = (n1+n2)-count;
	int temp[m];
	
	i=0;
	while(j!=n1 && k!=n2){
		if(a[j]<b[k]){
			temp[i]=a[j];
			i++;
			j++;
		}
		else if(a[j]==b[k]){
			temp[i]=a[j];
			j++;
			k++;
			i++;
		}
		else{
			temp[i]=b[k];
			i++;
			k++;
		}
	}
	if(j==n1){
		while(k!=n2){
			temp[i]=b[k];
			i++;
			k++;
		}
	}
	if(k==n2){
		while(j!=n1){
			temp[i]=a[j];
			i++;
			j++;
		}
	}
	printf("the sorted merged array is\n");
	for(i=0;i<m;i++){
		printf("%d ",temp[i]);
	}
	return 0;
}
int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 
		if (arr[mid] == x) 
			return 1; 
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 
		return binarySearch(arr, mid + 1, r, x); 
	} 
	return -1; 
} 

