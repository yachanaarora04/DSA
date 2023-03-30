#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        a++;
        else if(arr[i]==1)
        b++;
        else
        c++;
    }
    for(int i=0;i<a;i++)
        arr[i]=0;

    for(int i=a;i<a+b;i++)
        arr[i]=1;

    for(int i=b;i<a+b+c;i++)    
        arr[i]=2;

    for(int i=0;i<n;i++)   
        cout<<arr[i]<<" ";

}