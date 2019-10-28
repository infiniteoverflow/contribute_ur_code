#include <stdio.h>

int main (void) {
    
    int A;
    
    printf("Enter the desired year: \n");
    scanf("%d", &A);
    
    if(A%4 == 0 || A%4 != 0 && A%400 == 0){
        printf("This year is leap. \n");
    }
    else{
        printf("This year isn't leap. \n");
    }
    
    return 0;
}