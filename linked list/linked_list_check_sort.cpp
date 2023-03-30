#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*first=NULL,*second=NULL,*third=NULL;
void create1(int A[],int n)
{
    int i;
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
    
}
int issort(struct node *p)
{
    int x=-65536;
    // p=first;
    while(p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
       
    }
    return 1;
}
int main()
{
    int A[]={3,5,6,8,9,10};
    create1(A,6);
    if(issort(first))
    cout<<"list is sorted";
    else cout<<"list is not sorted";
    // display(first);
    return 0;
}