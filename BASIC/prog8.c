#include<stdio.h>
int main()
{
    int i,j;
    int a[11];
    int num[50]={30,31,38,30,35,31,34,36,37,39,38,32,35,36,31,35,34,33,39,30,32,37,33,38,35,34,32,31,39,34,37,35,36,32,31,39,30,37,35,39,33,32,36,39,30,31,36,32,38,39};
    for(i=0;i<11;i++)
    {
        int b=0;
        for(j=0;j<51;j++)
        {
            if(num[j]==30+i)
            {
                b++;
                a[i]=b;
            }
        }
    }
    for(i=0;i<11;i++)
    {
        printf("the number %d occurs %d times in the given array\n",30+i,a[i]);
    }
    return 0;
}