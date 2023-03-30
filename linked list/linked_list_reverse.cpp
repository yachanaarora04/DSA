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
void reverse1(struct node *p)
{
    int *A,i=0;
    while(p!=NULL)
    {
        A[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;
    i--;
    while(p!=NULL)
    {
        p->data=A[i];
        p=p->next;
        i--;
    }
}
void reverse2(struct node *p)
{
    struct node *q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
void reverse3(struct node *q,struct node *p)
{
    // struct node *q=NULL;
    if(p!=NULL)
    {
        reverse3(p,p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
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
    create1(A,6);
    // reverse1(first);
    reverse2(first);
    // reverse3(NULL,first);
    display(first);
    return 0;
}
    
