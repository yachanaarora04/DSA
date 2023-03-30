#include<iostream>
using namespace std;
void unionn(int A[],int B[],int n1, int n2)
{
    int C[20],k=0;
    int i=0,j=0;

    while(i<n1 && j<n2)
    {
        if(A[i]<B[j])
        {
            C[k++]=A[i++];
            continue;
        }
            

        else if(A[i]>B[j]) 
        {
            C[k++]=B[j++];
            continue;
        }
            
        else
        {
            C[k++]=B[j++];
            i++;
        
            continue;
        }
            
    }
    
    for(;i<n1;i++)
    C[k++]=A[i];
    for(;j<n2;j++)
    C[k++]=B[j];

    for(int i=0;i<k-1;i++)
    cout<<C[i]<<" ";
}
void intersection(int A[],int B[],int n1, int n2)
{
    int C[20],k=0;
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(A[i]==B[j])
        {
            C[k++]=A[i++];
            j++;
            continue;
        }
        else if(A[i]<B[j])
        {
            i++;
            continue;
        }
        else
        {
            j++;
            continue;
        }

    }
    // for(;i<n1;i++)
    // C[k++]=A[i];
    // for(;j<n2;j++)
    // C[k++]=B[j];

    for(int i=0;i<k;i++)
    cout<<C[i]<<" ";


}
int main()
{
    int A[10],B[10],n1,n2;
    cin>>n1>>n2;
    // n1=5,n2=7;
    for(int i=0;i<n1;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>B[i];
    }
    cout<<"union is\n";
    unionn(A,B,n1,n2);
    cout<<endl;
    cout<<"intersection is\n";
    intersection(A,B,n1,n2);
    return 0;

}
