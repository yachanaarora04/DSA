#include<iostream>
using namespace std;

struct arre
{
    int A[10];
    int size;
    int length;
};
bool check(struct arre arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    struct arre arr={{2,4,6,8,10,11,26,28,34,45},10,10};
    cout<<check(arr);
    return 0; 
}
