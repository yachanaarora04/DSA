#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int i;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
         {
             continue;
         }
     cout<<i<<endl;    
    }
    return 0;
}    