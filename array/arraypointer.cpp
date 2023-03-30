#include<iostream>
using namespace std;

int *fun(int s)
{
    int *p;
    p= new int[s];
    for(int i=0; i<s; i++)
    {
        p[i]=i+1;
    }
    return p;
}

int main()
{
    int *a,size=7;
    a=fun(size);

    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}