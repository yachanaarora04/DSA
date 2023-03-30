// #include<iostream>
// using namespace std;
// int main()
// {
//     int A[10]={8,9,3,6,3,7,3,6,9,1};
//     int H[10];
//     for(int i=0;i<10;i++)
//     {
//         H[i]=0;
//     }
//     for(int i=0;i<10;i++)
//     {
//         H[A[i]]++;
//     }
//     for(int i=0;i<10;i++)
//     {
//         if(H[i]>1)
//         cout<<i<<" "<<H[i]<<endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N,i,A[100000],j,k,H[100000]={0};
	cin>>T;
	
	for(j=0;j<T;j++)
	{
	    cin>>N;
	    for(i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    int max=A[0];
	    for(i=0;i<N;i++)
	    {
	        if(A[i]>max)
	        max=A[i];
	    }
	    for(i=0;i<N;i++)
	    {
	        H[A[i]]++;
	    }
	    for(i=0;i<max;i++)
	    {
	        if((H[i]%2)!=0)
	        cout<<i<<endl;
	        else 
	        break;
	    }
	     
    }
	
	
	return 0;
}
