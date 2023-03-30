#include<iostream>
using namespace std;
int main()
{
    int A[10]={2,4,6,8,10,13,17,20,23,26};
    int i,j,n;
    cout<<"enter the sum=";
    cin>>n;
    for(i=0,j=9;i<j;)
    {
        if(A[i]+A[j]>n)
        {
            j--;
        }
        else if(A[i]+A[j]==n)
        {
            cout<<A[i]<<"+"<<A[j]<<" "<<"="<<A[i]+A[j]<<endl;
            i++;
            j--;
        }
        else 
        {
            i++;
        }
    }
    return 0;
}