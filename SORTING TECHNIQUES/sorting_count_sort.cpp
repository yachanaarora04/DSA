#include<iostream>
using namespace std;
int findmax(int A[],int n)
{
    int max=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    return max;
}
void countsort(int A[],int n)
{
    int *C;
    int max=findmax(A,n);
    C=new int[max+1];
    for(int i=0;i<max+1;i++)
    C[i]=0;
    for(int i=0;i<n;i++)
    C[A[i]]++;
    int i=0,j=0;
    while(i<max+1)
    {
        if(C[i]>0)
        {
            A[j++]=i;
            C[i]--;
        }
        else i++;
    }
}
int main()
{
    int A[]={6,3,8,7,9,2,1,4,5,10},n=10,i;
    countsort(A,n);
    for(i=0;i<n;i++)
    cout<<A[i]<<" ";
    return 0;
}