#include <stdio.h>
#include <stdlib.h>

void merge(int vet[], int begin, int mid, int end) { 
    int i, j, k; 
    int n1 = mid - begin + 1; 
    int n2 = end - mid; 

    int L[n1], R[n2]; 
    
    printf("L: ");
    for (i = 0; i < n1; i++) {
        L[i] = vet[begin + i];
        printf("%d ", L[i]);
    }
    
    printf("\nR: ");
    for (j = 0; j < n2; j++) {
        R[j] = vet[mid + 1+ j];
        printf("%d ", R[j]);
    }
    printf("\n");
  
    i = 0; 
    j = 0; 
    k = begin;
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            vet[k] = L[i]; 
            i++; 
        } 
        else { 
            vet[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        vet[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) { 
        vet[k] = R[j]; 
        j++; 
        k++; 
    }
    
    for (i = 0; i < k; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
} 
  
void mergeSort(int vet[], int begin, int end) { 
    if (begin < end) { 
        int mid = (begin+end)/2; 
  
        mergeSort(vet, begin, mid); 
        mergeSort(vet, mid+1, end); 
  
        merge(vet, begin, mid, end); 
    } 
}

int main()
{
    int vet[7] = {8, 3, 2, 7, 1, 5, 4};
    
    int i, j, v, temp, menor;
    
    mergeSort(vet, 0, 6);
    
    for (i = 0; i < 7; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}