#include <studio.h>
int main()
{	
    int n;
    printf("Enter the number of stairs required\n");
    scanf("%d",&n); 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
	printf("\n");
    }
    return 0;
}
