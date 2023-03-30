#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the number";
  cin>>n;
  int num;
   for(num=2; num<n; num++)
   {
      if(n%num==0)
      {
        cout<<"non prime\n"; 
        break;
      }   
   }
      if(n==num)
      {
          cout<<"prime\n";
      }
        
        return 0;
      
}