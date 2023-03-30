#include<iostream>
using namespace std;

struct rect
{
    int len;
    int bre;

};
int main()
{
    struct rect r={10,5};
    cout<<"area of rectangle is:"<<r.len*r.bre;
    return 0; 
}
