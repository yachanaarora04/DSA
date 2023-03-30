#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
    struct node *t;
    t=new node;
    if(t==NULL)
        cout<<"the queue is full"<<endl;
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }    
    }
}
int dequeue(struct node *p)
{
    int x=-1;
   
    if(front==NULL)
        cout<<"queue is empty"<<endl;
    else
    {
        front=front->next;
        x=p->data;
        delete p;
    }    
    return x;
}
void display(struct node *p)
{
    while(p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    cout<<dequeue(front)<<endl<<endl;
    display(front);
    return 0;

}