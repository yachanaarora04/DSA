#include<iostream>
using namespace std;
struct arre
{
    int A[8];
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
int linearsearch(struct arre *arr,int key)
{
    int i;
    for(i=0;i<arr->length-1;i++)
    {
        if(key==arr->A[i])
        {
            // swap(&arr->A[i],&arr->A[0]);
            // swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}
// void display(struct arre arr)
// {
//     int i;
//     cout<<"the elements are\n";
//     for(i=0;i<arr.length;i++)
//     cout<<arr.A[i]<<"\n";

// }
int main()
{
    struct arre arr={{2,3,4,5,6,7,8,9},8,8};
    

    cout<<linearsearch(&arr,5 );
    // display(arr);
    return 0;
}