#include<stdio.h>
int main()
{
    int per;

    printf("enter the percentage");
    scanf("%d",&per);

    if(per>=80)
    printf("first division");

    else if(per>=50)
    printf("second division");

    else if(per>=40)
    printf("third division");

    else
    printf("fail");

    return 0;

}
