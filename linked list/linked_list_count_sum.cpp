#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*first=NULL;
void create(int A[],int n)
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
    create(A,6);
    cout<<count(first)<<endl;
    cout<<sum(first)<<endl;
    cout<<maxi(first);
    // display(first);
    return 0;


}