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
    struct arre arr={{6,7,8,9,10,11,13,14,15},9,10};
    // int i,tot=0;
    // for(i=0;i<arr.length;i++)
    // {
    //     tot+=arr.A[i];
    // }
    // int sum=(arr.A[arr.length-1]*(arr.A[arr.length-1]+1))/2;
    // cout<<"missing element is: "<<sum-tot;
    // return 0;
    int j=0;
    int diff=arr.A[0]-j;
    for(j=0;j<arr.length;j++)
    {
        if((arr.A[j]-j)!=diff)
        {
            cout<<"Missing element is: "<<j+diff;
            break;
        }
    }
    return 0;

}