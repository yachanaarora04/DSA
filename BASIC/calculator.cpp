#include<iostream>
using namespace std;

int main()
{
    float a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    char op;
    cout<<"enter an operator";
    cin>>op;

    switch(op)
    {
      case '+':
           cout<<a+b;
           break;

      case '-':
           cout<<a-b;
           break;

      case '*':
           cout<<a*b;
           break;

      case '/':
           cout<<a/b;
           break;

      default:
           cout<<"operator not found!";
           break;  
    }  
    return 0;             
}