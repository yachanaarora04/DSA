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
struct node *linearsearch(struct node *p,int key)
{
    struct node *q;
    // q=new node; 
        
    while(p!=NULL)
    {
        
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }

//     while(p!=NULL)
//     {
//         if(key==p->data)
//             return p; 
//         p=p->next;
//     }
// return NULL;
    // if(p==NULL)
    return NULL;
    // if(p->data==key)
   
    // else
    // return linearsearch(p->next,key);

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
    struct node *temp;
    temp=linearsearch(first,9);
    temp=linearsearch(first,5);
    if(temp!=NULL)
        cout<<"key is found "<<temp->data<<endl;
    else cout<<"key is not found";
    display(first);
}    