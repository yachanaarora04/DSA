#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        int space=n-i;
        for(j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
return 0;
}