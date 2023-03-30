#include<iostream>
using namespace std;

void insert(int A[],int n)
{
    int i=n;
    int temp=A[i];
    while(i>1 && temp>A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
   
}
int deletee(int A[],int n)
{
    int x,i,j,temp;
    x=A[1];
    A[1]=A[n];
    i=1;j=2*i;
    while(j<n-1)
    {
        if(A[j+1]>A[j])
        j=j+1;
        if(A[i]<A[j])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
           }
        
        // else break;
    }
    A[n]=x; //element is being stored at the last index 
    return x;
}
int main()
{
    int H[]={0,10,20,30,25,5,40,35};
    for(int i=2;i<=7;i++)
       insert(H,i);
    cout<<"original heap:"<<endl;   
    for(int i=1;i<=7;i++)
    cout<<H[i]<<" "; 
    cout<<endl;  
    // for(int i=1;i<=7;i++)
    // cout<<H[i]<<" ";
    // cout<<"deleted element is: "<<deletee(H,7)<<endl;
    // cout<<"deleted element is: "<<deletee(H,6)<<endl;
    for(int i=7;i>1;i--)
    deletee(H,i);
    cout<<"heap sort:"<<endl;
    for(int i=1;i<=7;i++)
    cout<<H[i]<<" ";
    return 0;
}