#include<iostream>
#include<cstdlib>
using namespace std;
struct arre
{
    int A[10];
    int length;
    int size;
};
struct arre* unionn(struct arre *arr1,struct arre *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct arre *arr3=(struct arre *)malloc(sizeof(struct arre));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else if(arr1->A[i]>arr2->A[j])
        arr3->A[k++]=arr2->A[j++];
        else 
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];

    arr3->length=k;
    arr3->size=10;
    return arr3;
}
struct arre* intersection(struct arre *arr1,struct arre *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct arre *arr3=(struct arre *)malloc(sizeof(struct arre));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        i++;
        else if(arr1->A[i]>arr2->A[j])
        j++;
        else 
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];

    arr3->length=k;
    arr3->size=10;
    return arr3;
}
struct arre* difference(struct arre *arr1,struct arre *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct arre *arr3=(struct arre *)malloc(sizeof(struct arre));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else if(arr1->A[i]>arr2->A[j])
        j++;
        else 
        {
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];

    arr3->length=k;
    arr3->size=10;
    return arr3;
}
void display(struct arre arr3)
{
    int i;
    cout<<"\n the elements are\n";
    for(i=0;i<arr3.length;i++)
    cout<<arr3.A[i]<<"\n";
}

int main()
{
    struct arre arr1={{2,4,6,8,10},5,10};
    struct arre arr2={{2,5,7,8,9},5,10};
    struct arre *arr3;
    arr3=difference(&arr1,&arr2);
    display(*arr3);
    return 0;
}