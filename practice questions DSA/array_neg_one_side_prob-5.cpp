#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b,n,arr[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            swap(&arr[j],&arr[i]);
            j++;
            continue;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}