#include<iostream>
using namespace std;
template <class T>
class arre
{
    private:
    T *A;
    int size;
    int length;
    public:
    arre()
    {
        size=10;
        length=0;
        A=new T[10];
    }
    arre(int sz)
    {
        size=sz;
        length=0;
        A=new T[size];
    }
    ~arre()
    {
        delete []A;
    }
    void display();
    void insert(int index,T x); 
    T deletee(int index);
};
template <class T>
void arre<T>::display()
{
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
template <class T>

void arre<T>::insert(int in,T num)
{
    if(in>=0 && in<=length)
    {
        for(int i=length-1;i>=in;i--)
        {
            A[i+1]=A[i];
        }
        A[in]=num;
        length++;
    }
}
template <class T>

T arre<T>::deletee(int in)
{
    T x=0;
    if(in>=0 && in<=length)
    {
        x=A[in]; 
        for(int i=in;i<length-1;i++)
        {
            A[i]=A[i+1];
        }
    }
    length--;
    return x;
}    
int main()
{
    arre<int> arr(10);
    arr.insert(0,2.1);
    arr.insert(1,7.1);
    arr.insert(2,19.3);
    arr.display();
    cout<<arr.deletee(1)<<"\n";
    arr.display();
    return 0;
}