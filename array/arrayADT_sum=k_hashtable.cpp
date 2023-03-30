#include<iostream>
using namespace std;
int main()
{
    int A[10]={6,3,8,10,16,7,5,2,9,-4};
    int H[17],n;
    cout<<"enter the sum= ";
    cin>>n;
    
    for(int i=0;i<17;i++)
    {
        H[i]=0;
    }
    for(int i=0;i<10;i++)
    {
        H[A[i]]++;
        
    }
    for(int i=0;i<10;i++)
    {
        if(A[i]<n)
        {
        while(H[n-A[i]]==1)
        {
            if(H[n-A[i]]!=-1 && H[A[i]]!=-1)
            {
                if(A[i]!=n-A[i])
                    cout<<A[i]<<"+"<<n-A[i]<<"="<<n<<endl;
            }
            H[n-A[i]]=-1;
            H[A[i]]=-1;
        }
        }
    }
    
    return 0;

}