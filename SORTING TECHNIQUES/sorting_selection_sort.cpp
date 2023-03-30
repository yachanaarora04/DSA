#include<iostream>
using namespace std;
void swapp(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void selectionsort(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
            k=j;
        }
        swapp(&A[i],&A[k]);
    }
}
int main()
{
    int A[]={11,13,7,2,9,6,4,5,10,3},n=10;
    selectionsort(A,10);
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    return 0;

}