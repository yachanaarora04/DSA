#include<iostream>
using namespace std;
struct arre
{
    int A[10];
    int length;
    int size;
};
int main()
{
    struct arre arr={{1,2,3,3,4,6,6,6,6,7},10,10};
    int i=0;
    // int last=0;
   
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]==arr.A[i+1])
        {
            // last=arr.A[i];
            int j=i+1;
            while(arr.A[j]==arr.A[i])
            {
                j++;
            }
            
            cout<<arr.A[i]<<" "<<j-i<<endl;
            i=j-1;
        }
    }
    return 0;
}    