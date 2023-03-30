#include<iostream>
using namespace std;
struct arre
{
    int A[20];
    int length;
    int size;
};
void insert(struct arre *arr,int x)
{
    int i=arr->length-1;
    if(arr->size==arr->length)
    return;
    while(i>=0 && x<arr->A[i])
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x; 
    
    arr->length++;
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
    struct arre arr={{2,4,6,8,10,13,16,18,24,26},10,20  };
    insert(&arr,14);
    display(arr);
    return 0;
}