#include<iostream>
using namespace std;

void DecimalToBinary(int n)
{
    int dectobi[32];

    int i=0;
    while(n>0)
    {
        dectobi[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1; j>=0;j--)
    {
        cout<<dectobi[j];
    }
}

int main()
{
    int n;
    cout<<"enter a decimal number";
    cin>>n;
    DecimalToBinary(n);
    return 0;
}