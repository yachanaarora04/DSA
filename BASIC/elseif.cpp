#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 3 numbers.";
    cin>>a>>b>>c;
    if(a>b&a>c)
    cout<<"max value is "<<a;
    else if(b>a&b>c)
    cout<<"max value is "<<b;
    else 
    cout<<"max calue is "<<c;

    return 0;
}

