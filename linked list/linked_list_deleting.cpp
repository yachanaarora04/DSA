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
int deletee(struct node *p,int pos)
{
    struct node *q,*t;
    int i,x=-1;
    if(first==NULL || pos<0 || pos>count(p)) 
    return -1;
    if(pos==1)
    {
        p=first;
        x=first->data;
        first=first->next;
        
        delete p;
    }
    else
    {
        p=first;
        q=NULL;
        for(i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;

    }
    return x;
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
    // int B[]={1,2,5,7,9};
    struct node *t1,*t2;
    create1(A,6);
    cout<<"deleted element is: "<<deletee(first,5)<<endl<<endl;
    display(first);
    return 0;
}