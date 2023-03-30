#include<stdio.h>
int main()
{
    int i,j,a[30],n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("even numbers are: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) 
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("odd numbers are: ");
    for(i=0;i<n;i++)
    {if(a[i]%2!=0)
        printf("%d ", a[i]); }
    printf("\n");
    printf("prime numbers are: ");
    for(i=0;i<n;i++)
    { for(j=2; j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                break;
            }
        }
        if(a[i]==j)
            printf("%d ",a[i]); }
    return 0;
}