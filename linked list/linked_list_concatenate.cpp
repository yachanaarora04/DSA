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

void concatenate(struct node *p)
{
    p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=second;
    second=NULL;
}
void concatenate2(struct node *p,struct node *q)
{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
    q=NULL;
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
    
    create1(A,6);
    create2(B,5); 
    cout<<"first list\n";
    display(first);
    cout<<"second list\n";
    display(second);
    cout<<"final list is\n";
    // concatenate1(first);
    concatenate2(first,second);
    display(first);
    return 0;
}
    