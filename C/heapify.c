#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int i, int j){
    if (a >= b) return i;
    else return j;
}

int main(){
    int vet[] = {2, 9, 7, 6, 5, 8};
    int n = 6;
    int i, j, p;
    
    for (i = n/2; i >= 0; i--){
        int l = 2*i;
        int r = 2*i + 1;
        if (l < n) {
            p = max(vet[i], vet[l], i, l);
        }
        if (r < n) {
            if (vet[max(vet[i], vet[r], i, r)] > vet[p]) p = max(vet[i], vet[r], i, r);
        }
        int v = vet[i];
        vet[i] = vet[p];
        vet[p] = v;
    }
    
    for (j = 0; j < n; j++){
        printf("%d ", vet[j]);
    }
    printf("\n");
    return 0;
}