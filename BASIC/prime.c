#include<stdio.h>
int main()
{
    int n,i;
    
    printf("enter the number to find if its prime or mot: ");
    scanf("%d", &n);
    

    for(i=2;i<n; i++)
    {
        if(n%i==0)
        {
            printf("not prime");
            break;
        }
    }
    if(n==i)
    {
        printf("prime");
    }
    return 0;

}   