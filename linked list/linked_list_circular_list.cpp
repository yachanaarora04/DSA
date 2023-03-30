#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head;
void create(int A[],int n)
{
    int i;
    struct node *t,*last;
    head=new node;
    head->data=A[0];
    head->next=head;
    last=head;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=head;
        last->next=t;
        last=t;  
    }
}
int count(struct node *p)
{
    int c=0;
    do
    {
        c++;
        p=p->next;
    }while(p->next!=head);
    return c;
}
void display(struct node *h)
{
    // using loop

    // do
    // {
    //     cout<<h->data<<" ";
    //     h=h->next;
    // } while (h!=head);
    // cout<<"\n";


    // using recursion
    
    static int flag=0;
    if(h!=head || flag==0)
    {
        flag=1;
        cout<<h->data<<" ";
        display(h->next);
    }
    flag=0;
}
void insert(struct node *p,int index, int x)
{
    struct node *t;
    int i;
    if(index==0)
    {
        t=new node;
        t->data=x;
        if(head==NULL)
        {
            head=t;
            head->next=head;
        }
        else
        { 
            while(p->next!=head)
                p=p->next;

            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else if(index>0 && index<=count(head))
    {
        t=new node;
        t->data=x;
        for(i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;    
    }
}
void deletee(struct node *p,int index)
{
    struct node *q;
    int i,x;
    if(index==1)
    {
        while(p->next!=head)
            p=p->next;
        x=p->data;
        if(head==p)
        {    
            delete head;   
            head=NULL;
        }
        else
        {
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else
    {
        for(i=0;i<index-2;i++)
            p=p->next;
        q=p->next;    
        p->next=q->next;
        x=q->data;
        
        delete q;

    }
}
int main()
{
    int A[]={2,3,4,5,6,7};
    create(A,6);
    // insert(head,0,10);
    deletee(head,1);
    display(head);
    return 0;

}
