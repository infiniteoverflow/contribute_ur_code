#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of floors:");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
