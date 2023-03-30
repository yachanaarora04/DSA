#include <stdio.h>

int main()
{
    float p, t, r, SI;

    printf("Enter principle: ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);

    
    SI = (p * t * r) / 100;

    printf("Simple Interest = %f", SI);

    return 0;
}