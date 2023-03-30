#include<iostream>
using namespace std;

void swap(int num1, int num2)
{
    int c;
    c=num1;
    num1=num2;
    num2=c;
    cout<<"swapped numbers are "<<num1<<" "<<num2;
    return;
}

int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    swap(a,b);
    return 0;
}