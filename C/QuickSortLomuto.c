#include <stdio.h>
#include <stdlib.h>

int lomuto(int vet[], int b, int e) {
    int p = vet[e];
    int s = b;
    int i;
    for (i = b; i < e; i++){
        if (vet[i] <= p) {
            int temp = vet[i];
            vet[i] = vet[s];
            vet[s] = temp;
            s++;
        }
    }
    int temp = vet[i];
    vet[i] = vet[s];
    vet[s] = temp;
    
    return s;
}

void quickSort(int vet[], int b, int e) {
    if (b < e){
        int s = lomuto(vet, b, e);
        quickSort(vet, b, s-1);
        quickSort(vet, s+1, e);
    }
}

int main()
{
    int vet[7] = {8, 3, 2, 7, 1, 5, 4};
    
    int i, j, v, temp, menor;
    
    quickSort(vet, 0, 6);
    
    for (i = 0; i < 7; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}