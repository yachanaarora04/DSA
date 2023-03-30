#include<iostream>
using namespace std;
int main()
{
    char A[]="painting";
    char B[]="painter";
    int i=0,j=0;
    while(A[i]!='\0' && B[j]!='\0')
    {
        if(A[i]==B[j])
        {
            i++;
            j++;
        }
        else if(A[i]!=B[i])
            break;
    }  
    if(A[i]>B[i])
        cout<<"A is bigger";
    else if(A[i]<B[i])
        cout<<"B is bigger";
    else
        cout<<"both are equal";          
    return 0;
}        
