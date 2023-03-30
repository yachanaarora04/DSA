#include<iostream>
using namespace std;
struct arre
{
    int A[20];
    int size;
    int length;

};
int del(struct arre *arr, int index)
{
    int x=0;
    if(index>=0 && index<arr->length)
    {
        int x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return x;
    
}
void display(struct arre arr)
{
    int i;
    cout<<"\n the elements are\n";
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<"\n";

}
int main()
{
    struct arre arr={{2,3,4,5,6,7,8,9,10},20,9};
    cout<<"deleted element is "<<del(&arr,3);
    display(arr);
    // cout<<"deleted element is "<<del(&arr,7);
    // display(arr);
    cout<<arr.length;
    return 0;
}