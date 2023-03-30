#include<stdio.h>
int main()
{
    int dividend,divisor,quotient,remainder;
    printf("enter the dividend:");
    scanf("%d", &dividend);
    printf("enter the divisor:");
    scanf("%d", &divisor);

    quotient=dividend/divisor;
    remainder=dividend%divisor;

    printf("\nquotient is:%d\n", quotient);
    printf("\nremainder is:%d", remainder);
    return 0;
}