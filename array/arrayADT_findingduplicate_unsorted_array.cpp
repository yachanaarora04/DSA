#include<iostream>
using namespace std;
int main()
{
    int A[10]={7,2,9,10,7,9,1,17,6,7};
    int j;
    for(int i=0;i<9;i++)
    {
        int count=1;
        if(A[i]!=-1)
        {
            for(j=i+1;j<10;j++)
            {
                if(A[i]==A[j])
                {
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1)
            cout<<A[i]<<" "<<count<<endl;
        }
    }
    return 0;

}