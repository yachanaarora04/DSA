#include<iostream>
using namespace std;
struct arre
{
    int A[10];
    int length;
    int size;
};
int max(struct arre arr)
{
    int i=0;
    int ma=arr.A[0];
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]>ma)
        ma=arr.A[i];
    }
    return ma;    
}
int main()
{
    struct arre arr={{0,3,7,4,9,12,6,1,2,10},10,10};
    int c=max(arr);
    int H[c];
    for(int i=0;i<c;i++)
    {
        H[i]=0;
    }
    for(int i=0;i<arr.length;i++)
    {
        H[arr.A[i]]++;
    }
    for(int i=0;i<c;i++)
    {
        if(H[i]==0)
        cout<<i<<"  ";
    }

    
    return 0;
}