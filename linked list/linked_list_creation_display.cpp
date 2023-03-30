#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[], int n)
{
    int i;
    struct node *t, *last;
    first= new node;
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

void display(struct node *p)
{
    // using loop
    // while(p!=NULL)
    // {
    //     cout<<p->data<<endl;
    //     p=p->next;
    // }
    // using recursion
    if(p!=NULL)
    {
        cout<<p->data<<endl;
        display(p->next);
    }

 
}
int main()
{
    int A[]={3,5,6,8,9,10};
    create(A,6);
    display(first);
    return 0;
}