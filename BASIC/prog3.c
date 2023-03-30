#include<stdio.h>
int main()
{
    int i,j,a[30],n,l,m=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum of digits of even numbers is: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
        while(a[i]>=10)
        {
                l=a[i]%10;
                a[i]=a[i]/10;
                m=m+l;
        } 
        m=m+a[i];
        }
    }
    printf("%d ",m);
}


    
