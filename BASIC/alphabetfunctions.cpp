#include<iostream>
using namespace std;

void alph(char name)
{
    if(name>='A'& name<='Z'||name>='a'& name<='z')
    {
        cout<<" it is an aplhabet";
    }
    else
    {
        cout<<" it is not an alphabet";
    }
    return;
}

int main()
{
    char c;
    cin>>c;

    alph(c);
    return 0;
}

