#include<iostream>
using namespace std;
int main()
{
    char A[]="yachanah";
    int i,j;

    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]!=-1)
        {
            int count=1;
            for(j=i+1;A[j]!='\0';j++)
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