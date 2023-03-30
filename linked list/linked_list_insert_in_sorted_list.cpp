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
void insertsort(struct node *p,int x)
{
    struct node *t=new node,*q=NULL;
    t->data=x;
    t->next=NULL;
    if(first==NULL)   //special case. when there is nothing in the list that means that the list is empty of first=null
        first=t;
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)   //special case.it means the the number to be added in the list that is x has the least value as p has not moved at all. it is on first only as it was inititially taken. that means the while condition we used in the step above is not satisfied as the value of p->data>x.
        { 
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
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
    int A[]={3,5,6,8,9,10};
    create1(A,6);
    insertsort(first,7);
    insertsort(first,2);
    display(first);
    return 0;
}