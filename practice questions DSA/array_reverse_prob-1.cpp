#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int tem=*x;
    *x=*y;
    *y=tem;
}
int main()
{
    int A[10],n;
    cin>>n;
    
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        swap(&A[i],&A[j]);
    }
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}