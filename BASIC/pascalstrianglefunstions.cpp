#include<iostream>
using namespace std;

int fact(int num)
{
    int pro=1;
    for(int a=num; a>=1; a--)
    {
        pro*=a;
    }
    return pro;
}

int main()
{
    int i,j,n;
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
         cout<<endl;
    }
   
    return 0;
    
}