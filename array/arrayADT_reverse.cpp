#include<iostream>
using namespace std;
struct arre 
{
    int A[10];
    int length;
    int size;
};
// void reverse(struct arre arr)
// {
//     int B[10];
//     int i,j;
//     for(i=arr.length-1,j=0; i>=0,j<arr.length;i--,j++)
//     {
//         B[j]=arr.A[i];
//     }
//     for(j=0;j<arr.length;j++)
//     {
//         cout<<B[j];
//     }
// }
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void reverse(struct arre *arr)
{
    int *B;
    int i,j;
    B=new int[arr->length];
    for(i=arr->length-1,j=0; i>=0,j<arr->length;i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
}
void reverse2(struct arre *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
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
    struct arre arr={{2,3,4,5,6,7,8,9,10,11},10,10};
    // reverse(&arr);
    reverse2(&arr);
    display(arr);
    return 0; 
}