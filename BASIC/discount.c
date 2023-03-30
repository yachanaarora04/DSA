#include<stdio.h>
int main()
{
    float bs,hra,da,gross;
    printf("enter the basic salary");
    scanf("%f", &bs);
    if(bs<1500)
    {
        hra=0.1*bs;
        da=0.9*bs;
    
    }
    else
    {
        hra=500;
        da=0.98*bs;
    
    }

    gross=bs+hra+da;
    printf("final gross salary is: %f", gross);
    return 0;

}    