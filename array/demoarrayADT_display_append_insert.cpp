#include<iostream>
using namespace std;
struct arre
{
    int A[20];
    int size;
    int length;

};
void insert(struct arre *arr, int index, int num)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>=index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=num;
        arr->length++;
 
    }
}
void append(struct arre *arr, int x) 
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length]=x;
        arr->length++;
    }
}
void display(struct arre arr)
{
    int i;
    cout<<"the elements are\n";
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<"\n";

}
int main()
{
    struct arre arr={{2,3,4,5,6},20,5};
    insert(&arr,2,17);
    append(&arr,10);
    display(arr);
    cout<<arr.length;
    return 0;
}