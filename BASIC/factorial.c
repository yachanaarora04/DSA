#include<stdio.h>
int main()
{
    int n,i,pro=1;
    printf("enter the number whose factorial is to be calculated: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        pro*=i;
    }
    printf("factorial of %d is: %d", n,pro );
    return 0;
}