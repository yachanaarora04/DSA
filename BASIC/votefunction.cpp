#include<iostream>
using namespace std;

void vote(int num)
{
    if(num>=18)
    {
        cout<<"eligible for voting";
    }
    else
    {
        cout<<"not eligible for voting";
    }
    return;
}

int main()
{
    int age;
    cout<<"enter your age ";
    cin>>age;

    vote(age);
    return 0;
}