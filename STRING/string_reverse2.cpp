#include<iostream>
using namespace std;
int main()
{
    char A[]="yachana";
    int i,j;
    for(j=0;A[j]!='\0';j++)
    {}
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        int temp=A[j];
        A[j]=A[i];
        A[i]=temp;
    }
    cout<<A;
    
    return 0;
}