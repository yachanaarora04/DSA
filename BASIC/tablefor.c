#include<stdio.h>
int main()
{
    int i=1,n,k;
    printf("enter the number whose table is to be printed: ");
    scanf("%d", &n);
    printf("ebter the number upto which the table is to be printed: ");
    scanf("%d", &k);
    printf("the table is:-\n");

    while(i<=k)
    {
        printf("%d*%d=%d\n", n, i, n*i);
        i++;
    }
    return 0;
    
}