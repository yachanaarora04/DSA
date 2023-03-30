#include<iostream>

using namespace std;

struct arre
{
    int *A;
    int size;
    int length;
};
void display(struct arre arr)
{
    int i;
    cout<<"the elements are"<<"\n";
    for(i=0;i<arr.length;i++)
     cout<<arr.A[i]<<"\n";

}
int main()
{
    struct arre arr;
    int i,n;
    cout<<"enter size of the array ";
    cin>>arr.size;
    arr.A=new int(arr.size); 
    arr.length=0;
    cout<<"enter the number of elements ";
    cin>>n;
    cout<<"enter all the elements of the array ";
    for(i=0;i<n;i++)
    {
        cin>>arr.A[i];
    }
    arr.length=n;
    display(arr);
    return 0;

}