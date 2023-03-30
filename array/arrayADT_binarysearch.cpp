#include<iostream>
using namespace std;
struct arre
{
    int A[20];
    int length;
    int size;
};
int binarysearch(struct arre arr, int key)
{
    int h,l,mid;
     l=0;
     h=arr.length-1;
     
     while(l<=h)
     {
         mid=(l+h)/2;
         if(key==arr.A[mid])
         return mid;
         else if(key<arr.A[mid])
         {
             h=mid-1;
         }
         else
             l=mid+1; 
     }
     return -1;
}
int binarysearch(struct arre arr, int l, int h, int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
         return mid;
        else if(key<arr.A[mid])
            return binarysearch(arr,l,mid-1,key); 
         else
            return binarysearch(arr,mid+1,h,key);
    }
    return -1;
}
int main()
{
    struct arre arr={{4,8,10,15,18,21,24,27,29,33,34,37,39,31,43},15,20};
    // cout<<binarysearch(arr,24);
    cout<<binarysearch(arr,0,arr.length,34); 
    return 0;
}