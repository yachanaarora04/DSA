#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number of terms whose sum is to be calculated: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("sum= %d", sum);
    return 0;

}