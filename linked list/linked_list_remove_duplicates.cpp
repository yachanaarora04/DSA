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
void removeduplicate(struct node *p)
{
    struct node *q=first->next;
    while(q!=NULL)
    {
        if(q->data!=p->data)
        {
            p=q;
            q=q->next;

        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
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
    int A[]={3,5,6,6,9,9};
    create1(A,6);
    removeduplicate(first);
    display(first);
    return 0;
}