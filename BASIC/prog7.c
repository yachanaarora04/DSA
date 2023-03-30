#include<stdio.h>
#include<string.h>
int main()
{
    int n, a[20],b[20],temp[20];
    printf("size of array: ");
    scanf("%d",&n);
    printf("elements of first array: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nelements of second array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        a[i]=b[i]+a[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    printf("\narray 1 after swapping: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
     printf("\narray  after swapping: ");
     for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}    