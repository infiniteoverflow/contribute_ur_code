#include <stdio.h>
int bintodec(int n);

bintodec(int n)
{

    if(n==0)
    {
        return 0;
    }
    else{
        return n%10+bintodec(n/10*2);
    }
}
int main()
{
   int bin, res;
   printf("Enter the binary number = ");
   scanf("%d",&bin);
   res = bintodec(bin);
   printf("The equivalent decimal = %d",res);
}
