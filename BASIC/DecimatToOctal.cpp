#include<iostream>
using namespace std;

void DecimalToOctal(int n)
{
    int decitooct[32];
    int i=0;
    while(n>0)
    {
        decitooct[i]=n%8;
        n/=8;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        cout<<decitooct[j];
    }
}

int main()
{
    int n;
    cout<<"enter a decimal number";
    cin>>n;
    DecimalToOctal(n);
    return 0;
}