#include<iostream>
using namespace std;

int max(int num1, int num2, int num3)
{
    int m;
    if(num1>num2 & num1>num3)
    {
        m=num1;
    }
    else if(num2>num1 & num2>num3)
    {
        m=num2;
    }
    else 
    {
        m=num3;
    }
    return m;

}

bool check(int x, int y, int z)
{
    int a=max(x,y,z);
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if(a*a == b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z))
    {
        cout<<"pythagorean triplet";
    }
    else
    {
        cout<<"not a pythogorean triplet";
    }
    return 0;

}