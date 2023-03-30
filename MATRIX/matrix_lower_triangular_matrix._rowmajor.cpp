#include<iostream>
using namespace std;
struct lowtri
{
    int *A;
    int n;
};
void set(struct lowtri *lm,int i, int j, int x)
{
    if(i>=j)
    {
        lm->A[(i*(i-1))/2+j-1]=x;
    }
    

}
int get(struct lowtri lm, int i, int j)
{
    if(i>=j)
    {
        return lm.A[(i*(i-1))/2+j-1];
    }
    else return 0;
    

}
void display(struct lowtri lm)
{
    for(int i=1;i<=lm.n;i++)
    {
        for(int j=1;j<=lm.n;j++)
        {
            if(i>=j)
            {
                cout<<lm.A[(i*(i-1))/2+j-1]<<" ";
            }
            else
            cout<<"0 ";
        }
        cout<<endl;
    }

}
int main()
{
    int i,j,x;
    struct lowtri lm;
    cout<<"enter the dimensions ";
    cin>>lm.n;
    
    lm.A=new int(lm.n*(lm.n+1)/2);
    cout<<"enter all elements";
    for(i=1;i<=lm.n;i++)
    {
        for(j=1;j<=lm.n;j++)
        {
            cin>>x;
            set(&lm,i,j,x);
        }
    }
    cout<<endl<<endl;
    display(lm);
    cout<<get(lm,4,3)<<endl;
    cout<<get(lm,3,2);

    return 0;

}