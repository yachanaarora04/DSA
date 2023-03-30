#include<iostream>
using namespace std;

int fact(int num)
{
    int pro=1;
    for(int i=num; i>=1; i--)
    {
        pro*=i;
        
    }
    return pro;
}

int main()
{
    int n;
    cout<<"enter the number to calculate factorial";
    cin>>n;
    cout<<fact(n);
    return 0;
}