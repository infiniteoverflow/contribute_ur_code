#include <stdlib.h>
#include <stdio.h>

void q_sort(long long int *numbers,long long  int left,long long  int right) {
	long long int pivot, l_hold, r_hold;
	l_hold = left;
	r_hold = right;
	pivot = numbers[left];
	while (left < right) {
		while ((numbers[right] >= pivot) && (left < right))
      			right--;
  	 	if (left != right) {
                	numbers[left] = numbers[right];
      			left++;
   		}
		while ((numbers[left] <= pivot) && (left < right))
			left++;
 		if (left != right) {
     				numbers[right] = numbers[left];
      				right--;
   		}
 	}
  	numbers[left] = pivot;
  	pivot = left;
  	left = l_hold;
  	right = r_hold;
  	if (left < pivot)
    		q_sort(numbers, left, pivot-1);
  	if (right > pivot)
    		q_sort(numbers, pivot+1, right);
}

void quickSort(long long int *numbers, long long int array_size) {
  q_sort(numbers, 0, array_size - 1);
}

// Input: Array
// number of lines of array M and array contents written per line 

int main () {
	long long int M,i;
	scanf ("%lld\n", &M);
	long long int A[M];
	for (i=0;i<M;i++)
			scanf ("%lld", &A[i]);
	quickSort(A, M);
	for (i=0;i<M;i++)
		printf ("%lld\n",A[i]);
	return 0;
}
