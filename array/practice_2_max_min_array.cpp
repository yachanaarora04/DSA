#include<iostream>
using namespace std;
int main()
{
    int A[10],n,i;
    cout<<"enter the size ";
    cin>>n;
    cout<<"enter an array";
    for(i=0;i<n;i++)
    cin>>A[i];
    int max=A[0];
    int min=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];
        else if(A[i]<min)
        min=A[i];
        

    }
    cout<<"maximum element is: "<<max<<endl;
    cout<<"minimum elemnt is: "<<min<<endl;
    if(max==min)
    cout<<"Both are equal";
    return 0;

}