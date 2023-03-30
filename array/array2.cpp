#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cout<<"size of array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    int min=a[1];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    cout<<"maximum: "<<max;
    cout<<"minimum: "<<min;
    return 0;


}