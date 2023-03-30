#include<iostream>
using namespace std;
struct lowtri
{
    int *A;
    int n;
};
void set(struct lowtri *cm, int i,int j, int x)
{
    if(i>=j)
    {
       cm->A[cm->n*(j-1)-((j-1)*(j-2))/2+i-j]=x;
    }
}
int get(struct lowtri cm,int i,int j)
{
    if(i>=j)
    {
        return cm.A[cm.n*(j-1)-((j-1)*(j-2))/2+i-j];
    }
    else return 0;
    
}
void display(struct lowtri cm)
{
    for(int i=1;i<=cm.n;i++)
    {
        for(int j=1;j<=cm.n;j++)
        {
            if(i>=j)
            {
                cout<<cm.A[cm.n*(j-1)-((j-1)*(j-2))/2+i-j]<<" ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    int i,j,x;
    struct lowtri cm;
    cout<<"enter the dimension: ";
    cin>>cm.n;
    cm.A=new int[cm.n];
    cout<<"enter all elemnets"<<endl;
    for(i=1;i<=cm.n;i++)
    {
        for(j=1;j<=cm.n;j++)
        {
            cin>>x;
            set(&cm,i,j,x);
        }

    }
    cout<<endl;
    display(cm);
    cout<<get(cm,4,3)<<endl;
    cout<<get(cm,3,2);
return 0;

}