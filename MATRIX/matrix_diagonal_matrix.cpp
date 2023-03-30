#include<iostream>
using namespace std;
struct diagonal
{
    int A[10];
    int n;
};
void set(struct diagonal *d, int i, int j, int x)
{
    if(i==j)
    {
        d->A[i-1]=x;
    }
}
int get(struct diagonal d, int i, int j)
{
    if(i==j)
    {
        return d.A[i-1];
    }
    else
        return 0;
}
void display(struct diagonal d)
{
    for(int i=0;i<d.n;i++)
    {
        for(int j=0;j<d.n;j++)
        {
            if(i==j)
            {
                cout<<d.A[i]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    struct diagonal d;
    d.n=4;
    set(&d,1,1,5);
    set(&d,2,2,7);
    set(&d,3,3,10);
    set(&d,4,4,14);
    display(d);
    cout<<get(d,1,1);
    return 0;
}
