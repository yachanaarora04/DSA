#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number of terms for the sum to be calculated: ");
    scanf("%d", &n);
    i=1;
    
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("sum= %d", sum);
    return 0;

}