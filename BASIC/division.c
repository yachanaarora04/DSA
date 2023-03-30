#include<stdio.h>

int main()
{
    int a,b,quo,rem;
    
    printf("enter the dividend and the divisor: ");
    scanf("%d %d",a,b);
    

    quo=a/b;
    printf("the quotient is: %d", quo);

    rem=a%b;
    printf("the remainder is: %d", rem);

    return 0;

}