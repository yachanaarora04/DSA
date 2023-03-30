#include<iostream>
using namespace std;

struct complex
{
    int real;
    int imag;
};
int main()
{
    struct complex c1;
    struct complex c2;
    struct complex c3;
    cout<<"enter the real parts of the complex numbers 1,2,3 respectively: ";
    cin>>c1.real>>c2.real>>c3.real;
    cout<<"enter the imaginary parts of the complex numbers 1,2,3 respectively: ";
    cin>>c1.imag>>c2.imag>>c3.imag;

    cout<<"the complex number 1 is: "<<c1.real <<" + i"<<c1.imag<<endl;
    cout<<"the complex number 2 is: "<<c2.real <<" + i"<<c2.imag<<endl;
    cout<<"the complex number 3 is: "<<c3.real <<" + i"<<c3.imag<<endl;
    return 0;


}