#include<iostream>
using namespace std;

int main()
{
    char A[]="A/9YACH?";
    int len=0,j;
    for(int i=0;A[i]!='\0';i++)
    {
        if((A[i]>=97 && A[i]<=122) || (A[i]>=65 && A[i]<=90) || (A[i]>=48 && A[i]<=57))
        len++;
    }
    for(j=0;A[j]!='\0';j++)
    {}
    if(len==j)
    cout<<"valid";
    else 
    cout<<"invalid";
    
    
    return 0;
}