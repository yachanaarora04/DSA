#include<iostream>
using namespace std;
int main()
{
    char A[]="project";
    char B[8];
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {
        
    }
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        B[j]=A[i];
    }
    B[j]='\0';
    cout<<B;
    return 0;
}