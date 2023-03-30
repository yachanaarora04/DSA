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
void create2(int A[],int n)
{
    int i;
    struct node *t,*last;
    second=new node;
    second->data=A[0];
    second->next=NULL;
    last=second;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}
void merge(struct node *p,struct node *q)
{
    struct node *last;
    
    if(p->data<q->data)
    {
        third=p;
        last=p;
        
        p=p->next;
        last->next=NULL;
    }
    else
    {
        third=q;
        last=q;
       
        q=q->next;
        last->next=NULL;
    }
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)
    last->next=p;
    else
    last->next=q;
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    int A[]={3,5,6,8,9,10};
    int B[]={1,2,5,7,9};
    // struct node *t1,*t2;
    create1(A,6);
    
    create2(B,5); 
    cout<<"first list\n";
    display(first);
    cout<<"second list\n";
    display(second);
    cout<<"final list is\n";
    merge(first,second);
    display(third);
    return 0;
}


