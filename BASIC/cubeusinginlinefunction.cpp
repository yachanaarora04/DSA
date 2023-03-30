#include<iostream>
using namespace std;
inline int cube(int s)
{
    return s*s*s;
}
int main()
{
    int s;
    cin>>s;
    cout<<"cube of the number is: "<<cube(s);
    return 0;
}