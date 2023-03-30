#include<iostream>
using namespace std;
void mergesort(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[h++];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        B[k++]=A[i++];
        else B[k++]=A[j++];
    }
    for(;i<=mid;i++)
    B[k++]=A[i];
    for(;j<=h;j++)
    B[k++]=A[j];
    for(i=l;i<=h;i++)
    A[i]=B[i];
}
void rmerge(int A[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;

        rmerge(A,l,mid);
        rmerge(A,mid+1,h);
        mergesort(A,l,mid,h);
    }
}
int main()
{
    int A[]={6,3,8,7,9,2,1,4,5,10},n=10,i;
    rmerge(A,0,n-1);
    for(i=0;i<10;i++)
    cout<<A[i]<<" ";
    return 0;
}