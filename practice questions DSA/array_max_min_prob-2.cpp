#include<iostream>
using namespace std;
int main()
{
    int *A,size;
    cin>>size;
    A=new int[size];
    for(int i=0; i<size; i++)
    {
        cin>>A[i];
    }
    int max=A[0],min=A[0];
    for(int i=0; i<size; i++)
    {
        if(A[i]>max)
        max=A[i];
        if(A[i]<min)
        min=A[i];
    }
    cout<<max<<"   "<<min;
}