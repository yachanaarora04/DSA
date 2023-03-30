#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int i,arr[5];
    
    cout<<"enter the array\n";
    for(i=0; i<5; i++)
    
     {
       cin>>arr[i];
     }

       int max=INT_MIN;
       int min=INT_MAX;
    for(i=0; i<5;i++)
    {
      if(max<arr[i])
      {
        max=arr[i];
      }
      if(min>arr[i])
      {
        min=arr[i];
      }
    }
    cout<<"max no is"<<max<<endl;
    cout<<"min no is"<<min<<endl;

    return 0;

}