#include <stdio.h>

int main(void) {
    
    long long int n, i=0, ns=1, na=0, pn;
    
    scanf("%llu", &n);
    printf("%llu ", ns);
    for(i=0; pn<n; i++){
        pn = ns + na;
        na = ns;
        ns = pn;
        printf("%llu ", na);
    }
    
    return 0;
}