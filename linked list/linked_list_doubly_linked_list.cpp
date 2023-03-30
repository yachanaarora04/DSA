#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
int length(struct node *p)
{
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }
    return c;
}
void insert(struct node *p,int index,int x)
{
    struct node *t;
    if(index<0||index>length(p))
       return;
    if(index==0)
    {
        t=new node;
        t->data=x;
        t->next=first;
        t->prev=NULL;
        first->prev=t;
        first=t;
    }
    else
    {
        t=new node;
        
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next)
            p->next->prev=t;
        p->next=t; 
    }

}
int deletee(struct node *p,int pos)
{
    int x;
    if(pos<=0||pos>length(p))
       return 0;
    if(pos==1)
    {
        first=first->next;
        x=p->data;
        delete p;
        if(first) first->prev=NULL;
    }
    else
    {
        int i;
        for(i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next) p->next->prev=p->prev;
        x=p->data;
        delete p;
    }
    return x;
}
void reverse(struct node *p)
{
    struct node *temp;
    while(p)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p && p->next==NULL)
        first=p;
    }
   
}
void display(struct node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    insert(first,5,15);
    insert(first,0,15);
    // cout<<"length is:"<<length(first)<<endl;
    // deletee(first,3);
    // cout<<"deleted element is: "<<deletee(first,1)<<endl;
    reverse(first);
    cout<<"the array is ";
    display(first);
    

    // struct node *t;
    // t=new node;
    // t->prev=NULL;
    // t->next=NULL;
    // t->data=10;
    return 0;
}