#include<iostream>
using namespace std;
int main()
{
    char A[]="liril";
    int i,j;
    for(j=0;A[j]!='\0';j++)
    {}
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        if(A[i]==A[j])
        continue;
        else
        break;
    }
    if(A[i]==A[j])
    cout<<"palindrome";
    else
    cout<<"not a palindrame";

    return 0;
}