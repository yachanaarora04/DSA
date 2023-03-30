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
int count(struct node *p)
{
    int c=0;
    while(p!=0)
    {
        c++;
        p=p->next;
    }
    return c;
}
void insert(struct node *p,int index,int x)
{
    struct node *t=new node;
    if(index<0 || index>count(p))
    return;
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    // to create a linked list with new entries and not using an array already, use insert function starting with index 0
    else
    { 
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
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
    insert(first,3,7);
    display(first);
    return 0;
}