#include<iostream>
using namespace std;
int main()
{
    int A[10],i,n;
    cout<<"enter the size ";
    cin>>n;
    cout<<"enter the array ";
    for(i=0;i<n;i++)
    cin>>A[i];
    for(i=0;i<n/2;i++)
    {
        int temp=0;
        temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }
    cout<<"the reversed array is\n";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
        
    }
    return 0;
}