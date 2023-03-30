#include<iostream>
using namespace std;

int max(int num1, int num2, int num3)
{
    int maximum;
    if(num1>num2 & num1>num3)
    {
        maximum=num1;
    }
    else if(num2>num1 & num2>num3)
    {
        maximum=num2;
    }
    else
    {
        maximum=num3;
    }
    return maximum;
}

int min(int num1, int num2, int num3)
{
    int minimum;
    if(num1<num2 & num1<num3)
    {
        minimum=num1;
    }
    else if(num2<num1 & num2<num3)
    {
        minimum=num2;
    }
    else
    {
        minimum=num3;
    }
    return minimum; 
}


int main()
{
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;

    cout<<"maximum number is"<<max(a,b,c)<<endl;
    cout<<"minimum number is"<<min(a,b,c);
    return 0;
}