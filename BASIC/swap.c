#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping, first number=%d", a);
    printf("\nafter swapping, second number=%d", b);
    return 0;

}