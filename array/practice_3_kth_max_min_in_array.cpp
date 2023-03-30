#include<iostream>
using namespace std;

int main()
{
    int i,A[10]={5,2,7,14,12,98,4,8,1,10},j,k;
    cout<<"enter the value of k for kth max and min";
    cin>>k;
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
        if(A[i]>A[j])
        {
            int temp;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        }
    }
    for(i=0;i<=9;i++)
    cout<<A[i]<<" "<<endl;
    
        cout<<k<<"th minimum is: "<<A[k-1]<<endl;
        cout<<k<<"th maximum is: "<<A[10-k];
    
    

    return 0;
}