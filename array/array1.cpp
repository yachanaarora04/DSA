#include<iostream>
using namespace std;
int main()
{
    int n, a[20];
    cout<<"size of array\n";
    cin>>n;
    cout<<"array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        max=a[i];
        
    }
    cout<<"maximum element is: "<<max;
    return 0;
}
    