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
void imerge(int A[],int n)
{
    int p,l,mid,h,i;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            mergesort(A,l,mid,h);
        }
    }
    if(p/2<n)
    mergesort(A,0,p/2,n-1);
}
int main()
{
    int A[]={5,2,7,8,9,1,6,3},n=8,i;
    imerge(A,8);
    for(i=0;i<=7;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}