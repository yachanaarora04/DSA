#include<iostream>
using namespace std;

struct arre
{
    int A[10];
    int size;
    int length;
};

int get(struct arre arr,int ind)
{
    if(ind>=0 && ind<arr.length)
    {
        return arr.A[ind];
    }
    return -1; 
}
int set(struct arre *arr, int ind, int n)
{
    if(ind>=0 && ind<arr->length)
    {
        arr->A[ind]=n; 
    }
} 
int max(struct arre arr)
{
    int i;
    int max=arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        max=arr.A[i];
    }
    return max;
}
int min(struct arre arr)
{
    int i;
    int min=arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        min=arr.A[i];
    }
    return min;
}
void display(struct arre arr)
{
    int i;
    cout<<"\n the elements are\n";
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<"\n";
}
int sum(struct arre arr)
{
    int tot=0;
    for(int i=0;i<arr.length;i++)
    {
        tot+=arr.A[i];
    }
    return tot;
}
float avg(struct arre arr)
{
     return (float)sum(arr)/arr.length;
}
int main()
{
    struct arre arr={{2,4,6,8,10,12,14,16,18,20},10,10};
    cout<<get(arr,3)<<"\n";
    set(&arr,6,15);
    cout<<"Max number is "<<max(arr)<<"\n";
    cout<<"Min number is "<<min(arr)<<"\n";
    cout<<"Sum is "<<sum(arr)<<"\n";
    cout<<"average is "<<avg(arr);
    display(arr);
    return 0;
}