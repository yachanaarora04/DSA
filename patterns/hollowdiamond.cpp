#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        
        j++;
        cout<<"*";
        for(; j<=n+i-2; j++)
        {
            cout<<" ";
        }
        
        if(j>n & j<=n+i-1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        
        j++;
        cout<<"*";
        for(; j<=n+i-2; j++)
        {
            cout<<" ";
        }
        
        if(j>n & j<=n+i-1)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }


   return 0; 
}