#include<iostream>
using namespace std;
struct arre
{
    int A[10];
    int length;
    int size;
};
int main()
{
    struct arre arr={{6,7,8,11,12,13,16,18,19},9,10};
    int i=0;
    int diff=arr.A[0]-i;
   
    for(i=0;i<arr.length;i++)
    {
        if((arr.A[i]-i)!=diff)
        {
            while(diff<arr.A[i]-i)
            {
                cout<<"Missing element is: "<<diff+i<<endl;
                diff++;
            }
        }
    }
    return 0;
}