#include<iostream>
using namespace std;
int main()
{
    int n,a[10],i,k[10];
    cout<<"size of array";
    cin>>n;
    cout<<"elements of array: ";
    for(i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    { 
        k[n-i-1]=a[i];
        
    }
    cout<<"\nreversed array is: ";
    for(int i=0; i<n; i++)
        cout<<k[i]<<"  ";
    return 0;
}