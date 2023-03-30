#include<iostream>
using namespace std;

int OctalToBinary(int n)
{
    int sum=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        sum+=x*y;
        x*=8;
        n/=10;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter an octal number";
    cin>>n;
    cout<<OctalToBinary(n);
    return 0;

}