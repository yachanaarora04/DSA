#include<iostream>
using namespace std;

struct rectangle
{
    int a[5];
    int b;
};

void fun(struct rectangle *r)
{
    r->a[0]=10;
    r->a[2]=10;
    for(int i=0; i<5; i++)
    {
        cout<<r->a[i]<<endl;
    }
  
}

int main()
{
    struct rectangle r={{1,2,3,4,5},5};
    fun(&r);

    for(int i=0; i<5; i++)
    {
        cout<<r.a [i]<<endl;
    }
    return 0;
}