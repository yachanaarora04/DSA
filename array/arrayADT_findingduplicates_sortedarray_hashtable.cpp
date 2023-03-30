#include<iostream>
using namespace std;

int main()
{
    int A[12]={3,4,4,5,6,7,7,7,8,9,9,10};
    int H[10],i;
    for(int i=0;i<11;i++)
    {
        H[i]=0;
    }

    for(i=0;i<12;i++)
    {
        H[A[i]]++;
    }
    for(i=0;i<11;i++)
    {
        if(H[i]>1)
        cout<<i<<" "<<H[i]<<endl;
    }
    return 0;
}