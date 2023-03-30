#include<iostream>
using namespace std;

int fact(int num)
{
    int pro=1;
    for(int i=num; i>=1;i--)
    {
        pro*=i;
    }
    return pro;
}

int main()
{
    int n,r;
    cout<<"enter the number of terms and the value of r";
    cin>>n>>r;

    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}