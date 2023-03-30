#include<iostream>
using namespace std;
void insertionsort(int A[],int n)
{
    int i,j;

    for(i=1;i<n;i++)
    {
        j=i-1;
        int x;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
       A[j+1]=x;
    }
    
}
int main()
{
    int A[]={8,7,3,5,2};
    insertionsort(A,5);  //array always passed by address.
    for(int i=0;i<5;i++)
    cout<<A[i]<<" ";
    return 0;
}