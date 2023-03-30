#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int *A,n,k;
    cin>>n>>k;
    A=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    cout<<"kth min: "<<A[k-1]<<"\n"<<"kth max: "<<A[n-k];
}