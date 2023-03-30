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
int sum(struct node *p)
{
    int sum=0;
    while(p!=0)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int maxi(struct node *p)
{
    
    // int max=INT32_MIN;
    // while(p!=0)
    // {
    //     if(p->data>max)
    //     max=p->data;
    //     p=p->next;
    // }
    // return max;
    int x=0;
    if(p==0)
    {
        return INT32_MIN;
    }
    else
    {
        x=maxi(p->next);
        if(x>p->data)
        return x;
        else
        return p->data;
        // return x>p->data?x:p->data;
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
int issort(struct node *p)
{
    int x=-65536;
    // p=first;
    while(p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
       
    }
    return 1;
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
void merge(struct node *p,struct node *q)
{
    struct node *last;
    
    if(p->data<q->data)
    {
        third=p;
        last=p;
        
        p=p->next;
        last->next=NULL;
    }
    else
    {
        third=q;
        last=q;
       
        q=q->next;
        last->next=NULL;
    }
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)
    last->next=p;
    else
    last->next=q;
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
    
    // create2(B,5); 
    // cout<<count(first)<<endl;
    // cout<<sum(first)<<endl;
    // cout<<maxi(first)<<endl;
    // temp=linearsearch(first,9);
    // temp=linearsearch(first,5);
    // if(temp!=NULL)
    //     cout<<"key is found "<<temp->data<<endl;
    // else cout<<"key is not found";
    // insertsort(first,7);
    // insertsort(first,2);
    // cout<<"deleted element is: "<<deletee(first,1)<<endl<<endl;
    // if(issort(first))
    // cout<<"list is sorted";
    // else cout<<"list is not sorted";
    // removeduplicate(first);
    // reverse1(first);
    // reverse2(first);
    // reverse3(NULL,first);
    // cout<<"first list\n";
    t1=first;t2=first;
    t1=t1->next->next;
    t2=t2->next->next->next->next->next;
    t2->next=t1;
    cout<<isloop(first);
    // display(first);


    // display(first);
    // display(second);
    // cout<<"final list is\n";
    // concatenate2(second,first);
    // merge(first,second);
    // display(third);
    return 0;
}