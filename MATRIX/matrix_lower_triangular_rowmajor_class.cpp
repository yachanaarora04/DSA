#include<iostream>
using namespace std;
class lowtri
{
    private:
    int n;
    int *A;
    public:
    lowtri()
    {
        n=2;
        A=new int[3];
    }
    lowtri(int n)
    {
        this->n=n;
        A=new int[n*(n+1)/2]; 
        //same for col major
    }
    ~lowtri()
    {
        delete []A;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void lowtri::set(int i,int j,int x)
{
    if(i>=j)
    {
        A[(i*(i-1))/2+j-1]=x;
        //for col major only the formula will change to A[n*(j-1)-((j-1)*(j-2))/2+i-j];
    }
}
int lowtri::get(int i,int j)
{
    if(i>=j)
    {
        return A[(i*(i-1))/2+j-1];
        //for col major only the formula will change to A[n*(j-1)-((j-1)*(j-2))/2+i-j];
    }
    else 
        return 0;
}
void lowtri::display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
                cout<<A[(i*(i-1))/2+j-1]<<" ";
                //for col major only the formula will change to A[n*(j-1)-((j-1)*(j-2))/2+i-j];
            else 
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    int d,x;
    cout<<"enter the dimension ";
    cin>>d;
    lowtri lm(d);
    cout<<"enter the matrix";
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cin>>x;
            lm.set(i,j,x);
        }
    }
    lm.display();
    cout<<endl;
    cout<<lm.get(2,2);

    return 0;
}
