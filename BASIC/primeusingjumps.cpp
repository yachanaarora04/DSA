#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            
            cout<<"it is a non prime number\n";
            break;

        }
    }
    if(i==n){
    cout<<"it is a prime number\n";
    }
    return 0;

}