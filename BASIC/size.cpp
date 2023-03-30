#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the size of the array";
    cin>>n;
    int A[n];
    cout<<"enter the array";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"the array is";
    for(int x: A)
    {
        cout<<x<<endl;
    }
    
return 0;


}