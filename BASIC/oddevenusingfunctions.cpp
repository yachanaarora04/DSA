#include<iostream>
using namespace std;

void oddeven(int num)
{
    if(num%2==0)
    {
        cout<<"even number";
    }
    else
    {
        cout<<"odd number";

    }
    return;
}

int main()
{
    int n;
    cin>>n;
    oddeven(n);
    return 0;
}