#include<iostream>
using namespace std;

struct arre
{
    int A[10];
    int length;
    int size;
};
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void rearrange(struct arre *arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)
        {
            i++;
        }
        while(arr->A[j]>=0) 
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr->A[i],&arr->A[j]);
        }
    }
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
    struct arre arr={{2,-6,7,29,-10,-15,3,-2,56,18},10,10};
    rearrange(&arr);
    display(arr);
    return 0;
}