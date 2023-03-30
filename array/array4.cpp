#include<iostream>
using namespace std;

struct rectangle
{
    int len;
    int bre;
};
int main()
{
    rectangle *p;
    p= new rectangle;
    p->len=15;
    p->bre=20;
    cout<<p->len<<endl;
    cout<<p->bre;  
    
    return 0;
}