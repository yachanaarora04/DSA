#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head;
void create(int A[],int n)
{
    struct node *t,*last;
    head=new node;
    head->data=A[0];
    head->next=head;
    head->prev=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        struct node *t;
        t=new node;
        t->data=A[i];
        t->next=head;
        head->prev=t;
        t->prev=last;
        last->next=t;
        last=t;
    }

}
void insert(struct node *p,int pos,int x)
{
    
    if(pos==0)
    {
        struct node *t;
        t=new node;
        t->data=x;
        t->next=head;
        t->prev=head->prev;
        head->prev->next=t;
        head->prev=t;
        head=t;
    }
    else
    {
        struct node *t;
        t=new node;
        for(int i=0;i<pos-1;i++)
            p=p->next;
        t->data=x;
        t->next=p->next;
        t->prev=p;
        // if(p->next!=head)
        p->next->prev=t;
        // else
        
        p->next=t;    
    }
}
void display(struct node *p)
{
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    
}

int main()
{
    int A[]={2,3,4,5,6,7};
    create(A,6);
    insert(head,0,5);

    // insert(head,0,10);
    // deletee(head,1);
    display(head);
    return 0;

}
