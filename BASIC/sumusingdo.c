#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter the number of terms for the sum  to be calculated: ");
    scanf("%d", &n);
    

    do
    {
        sum+=i;   
        i++; 
    } 
    while (i<=n);

    printf("sum= %d", sum);
    return 0;
    
}