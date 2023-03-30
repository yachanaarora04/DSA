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

int isloop(struct node *f)
{
    struct node *p,*q;
    p=q=first;
    do
    {
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
    }
    while(p && q && p!=q);
    if(p==q )
    return 1;
    else return 0;
}
int main()
{
    int A[]={3,5,6,8,9,10};
    
    struct node *t1,*t2;
    create1(A,6);
    t1=first;t2=first;
    t1=t1->next->next;
    t2=t2->next->next->next->next->next;
    t2->next=t1;
    cout<<isloop(first);
    return 0;
}
