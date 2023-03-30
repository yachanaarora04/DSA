#include<iostream>
using namespace std;
void callbyvalue(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void callbyreference(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a,b;
    cin>>a>>b;
    callbyvalue(a,b);
    cout<<"reversed elements are:"<<a<<" "<<b<<endl;
    callbyreference(&a,&b);
    cout<<"reversed elemnts are:"<<a<<" "<<b;
    return 0;
}
