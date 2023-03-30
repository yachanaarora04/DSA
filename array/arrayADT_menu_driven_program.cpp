#include<iostream>
#include<cstdlib>
using namespace std;
struct arre
{
    int *A;
    int size;
    int length;
};
void insert(struct arre *arr,int x,int in)
{  
    int i=arr->length-1;
    if(arr->size==arr->length)
    return;
    while(i>=in)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[in]=x;
    arr->length++;
}    
int deletee(struct arre *arr, int index)
{  
    int x=0;
    if(index>=0 && index<arr->length)
    {
        int x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return x;
}  
int linearsearch(struct arre *arr,int key)
{ 
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            // swap(&arr->A[i],&arr->A[0]);
            // swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}
int sum(struct arre arr)
{
    int tot=0;
    for(int i=0;i<arr.length;i++)
    {
        tot+=arr.A[i];
    }
    return tot;
}
void display(struct arre arr)
{
    int i;
    cout<<"\n the elements are\n";
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<"\n";
}

int main()
{
    struct arre arr;
    int ch,val,ind,x;
    cout<<"enter the size of array";
    cin>>arr.size;
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;
    do
    {
        cout<<"menu\n1. Insert\n2. Delete\n3. Search\n4. Sum\n5. Display\n6. Exit\n";
        cout<<"Enter your choice";
        cin>>ch;
        
        switch(ch)
        {
            case 1: cout<<"enter the value and index";
                    cin>>val>>ind;
                    insert(&arr,val,ind);
                    break;
            case 2: cout<<"enter the index to be deleted";
                    cin>>ind;
                    x=deletee(&arr,ind);
                    cout<<"the deleted element is: "<<x;
                    break;
            case 3: cout<<"enter element to be searched: ";
                    cin>>x;
                    ind=linearsearch(&arr,x);
                    cout<<"the element index is"<<ind;
                    break;
            case 4: cout<<"the sum is: "<<sum(arr);
                    break;
            case 5: display(arr);
        }
    } while(ch<6);
    return 0;
}