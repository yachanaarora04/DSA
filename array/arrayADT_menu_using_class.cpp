#include<iostream>
#include<cstdlib>

using namespace std;
class arre
{
    private:
    int *A;
    int size;
    int length;
    void swap(int *x,int *y);
    public:
    arre()
    {
        size=10;
        length=0;
        A=new int[size];
    }
    arre(int sz)
    {
        size=sz;
        length=0;
        A=new int[size];
    }
    ~arre()
    {
        delete []A;
    }
    void insert(int x,int in);
    void insertsort(int x);
    void append(int x);
    int linearsearch(int key);
    int binarysearch(int k);
    int get(int index);
    int set(int index,int val);
    int max();
    int min();
    int sum();
    float avg();
    void reverse();
    void reverse2();   
    bool issorted();
    void rearrange();
    arre* merge(arre arr2);
    arre* unionn(arre arr2);
    arre* intersection(arre arr2);
    arre* difference(arre arr2);
    int deletee(int index);
    void display();
};
void arre::swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void arre::insert(int x,int in)
{  
    int i=length-1;
    if(size==length)
    return;
    while(i>=in)
    {
        A[i+1]=A[i];
        i--;
    }
    A[in]=x;
    length++;
}    
void arre::insertsort(int x)
{
    int i=length-1;
    if(size==length)
    return;
    while(i>=0 && x<A[i])
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x; 
    length++;
}
void arre::append(int x)
{
    if(length<size)
    {
        A[length++]=x;
    }

}
int arre::linearsearch(int key)
{ 
    int i;
    for(i=0;i<length;i++)
    {
        if(key==A[i])
        {
            // swap(&arr->A[i],&arr->A[0]);
            // swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}
int arre::binarysearch(int key)
{
    int h,l,mid;
     l=0;
     h=length-1;
     
     while(l<=h)
     {
         mid=(l+h)/2;
         if(key==A[mid])
         return mid;
         else if(key<A[mid])
         {
             h=mid-1;
         }
         else
             l=mid+1; 
     }
     return -1;
}
int arre::get(int ind)
{
    if(ind>=0 && ind<length)
    {
        return A[ind];
    }
    return -1; 
}
int arre::set(int ind, int n)
{
    if(ind>=0 && ind<length)
    {
        A[ind]=n; 
    }
} 
int arre::max()
{
    int i;
    int max=A[0];
    for(i=1;i<length;i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    return max;
}
int arre::min()
{
    int i;
    int min=A[0];
    for(i=1;i<length;i++)
    {
        if(A[i]<min)
        min=A[i];
    }
    return min;
}
int arre::sum()
{
    int tot=0;
    for(int i=0;i<length;i++)
    {
        tot+=A[i];
    }
    return tot;
}
float arre::avg()
{
     return (float)sum()/length;
}
void arre::reverse()
{
    int *B;
    int i,j;
    B=new int[length];
    for(i=length-1,j=0; i>=0,j<length;i--,j++)
    {
        B[j]=A[i];
    }
    for(i=0;i<length;i++)
    {
        A[i]=B[i];
    }
}
void arre::reverse2()
{
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--)
    {
        swap(&A[i],&A[j]);
    }
}
bool arre::issorted()
{
    int i;
    for(i=0;i<length-1;i++)
    {
        if(A[i]>A[i+1])
        {
            return false;
        }
    }
    return true;
}
void arre::rearrange()
{
    int i=0;
    int j=length-1;
    while(i<j)
    {
        while(A[i]<0)
        {
            i++;
        }
        while(A[j]>=0) 
        {
            j--;
        }
        if(i<j)
        {
            swap(&A[i],&A[j]);
        }
    }
}
arre* arre::merge(arre arr2)
{
    int i=0,j=0,k=0;
    arre *arr3=new arre(length+arr2.length);
    
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        {
            arr3->A[k++]=A[i++];
        }
        else
        {
            arr3->A[k++]=arr2.A[j++];
        }
    }
    for(;i<length;i++)
    arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
    arr3->A[k++]=arr2.A[j];
    arr3->length=length+arr2.length;
                
    return arr3;
}
arre* arre::unionn(arre arr2)
{
    int i,j,k;
    i=j=k=0;
    arre *arr3=new arre(length+arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        arr3->A[k++]=A[i++];
        else if(A[i]>arr2.A[j])
        arr3->A[k++]=arr2.A[j++];
        else 
        {
            arr3->A[k++]=A[i++];
            j++;
        }
    }
    for(;i<length;i++)
        arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
        arr3->A[k++]=arr2.A[j];

    arr3->length=k;
    
    return arr3;
}
arre* arre::intersection(arre arr2)
{
    int i,j,k;
    i=j=k=0;
    arre *arr3=new arre(length+arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        i++;
        else if(A[i]>arr2.A[j])
        j++;
        else 
        {
            arr3->A[k++]=A[i++];
            j++;
        }
    }
    for(;i<length;i++)
        arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
        arr3->A[k++]=arr2.A[j];

    arr3->length=k;
    
    return arr3;
}
arre* arre::difference(arre arr2)
{
    int i,j,k;
    i=j=k=0;
    arre *arr3=new arre(length+arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        arr3->A[k++]=A[i++];
        else if(A[i]>arr2.A[j])
        j++;
        else 
        {
            i++;
            j++;
        }
    }
    for(;i<length;i++)
        arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
        arr3->A[k++]=arr2.A[j];

    arr3->length=k;
   
    return arr3;
}
int arre::deletee(int index)
{  
    int x=0;
    if(index>=0 && index<length)
    {
        int x=A[index];
        for(int i=index;i<length-1;i++)
        {
            A[i]=A[i+1];
        }
        length--;
        return x;
    }
    return x;
}  


void arre::display()
{
    int i;
    cout<<"\n the elements are\n";
    for(i=0;i<length;i++)
    cout<< A[i]<<"\n";
}

int main()
{
    arre *arr;
    int ch,val,ind,x,sz;
    cout<<"enter the size of array";
    cin>>sz;
    arr=new arre(sz);
    
    do
    {
        cout<<"menu\n1. Insert\n2. Delete\n3. Search\n4. Sum\n5. Display\n6. Exit\n";
        cout<<"Enter your choice";
        cin>>ch;
        
        switch(ch)
        {
            case 1: cout<<"enter the value and index";
                    cin>>val>>ind;
                    arr->insert(val,ind);
                    break;
            case 2: cout<<"enter the index to be deleted";
                    cin>>ind;
                    x=arr->deletee(ind);
                    cout<<"the deleted element is: "<<x;
                    break;
            case 3: cout<<"enter element to be searched: ";
                    cin>>x;
                    ind=arr->linearsearch(x);
                    cout<<"the element index is"<<ind;
                    break;
            case 4: cout<<"the sum is: "<<arr->sum();
                    break;
            case 5: arr->display();
        }
    } while(ch<6);
    return 0;
}