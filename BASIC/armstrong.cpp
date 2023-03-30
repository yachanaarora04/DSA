#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,b=n;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+(rem*rem*rem);
        n/=10;
    }
    if(b==sum)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not an armstrong number";
    }
    return 0;
}