#include<iostream>
using namespace std;
int *fun(int n)
{
    int *a;
    a=new int[n];
    
    return(a);
}
int main()
{
    int *p;

    
    p=fun(5);
    return 0;
}