#include<iostream>
using namespace std;
void bubblesort(int A[],int n)
{
    int i,j;
    
    for(i=0;i<n-1;i++)
    {
        int flag=0; 
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) break;

    }
}
int main()
{
    int A[]={2,0,6,9,10,55,6,23,-2,-8,-5};
    int size=sizeof(A)/sizeof(A[0]);
    bubblesort(A,size);
    cout<<"elements in ascending order are:"<<endl;
    for(int i=0;i<size;i++)
    cout<<A[i]<<" ";
    return 0;
}