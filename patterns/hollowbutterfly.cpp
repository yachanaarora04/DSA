#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n; j++)
        {
            if(j==1||j==2*n||i==j||j==(2*n)-i+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=2*n; j++)
        {
            if(j==1||j==2*n||i==j||j==(2*n)-i+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}