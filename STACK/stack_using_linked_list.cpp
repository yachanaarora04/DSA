#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*top=NULL;
void push(int x)
{
    struct node *t=new node;
    if(t==NULL)
        cout<<"stack overflow"<<endl;
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }    
}
int pop()
{
    int x=-1;
    if(top==NULL)
        cout<<"stack underflow"<<endl;
    else
    {
        struct node *p=top;
        top=top->next;
        x=p->data;
        delete p;
    }    
    return x;
}
int peek(int pos)
{
    struct node *p=top;
    if(p)
    {
        for(int i=0;i<pos-1;i++)
        p=p->next;
    }
    if(p)
    return p->data;
    else return -1;
}
int stacktop()
{
    if(top)
    return top->data;
    else return -1;
}
int isempty()
{
    return top?0:1;

}
int isfull()
{
    struct node *t=new node;
    int r=t?0:1;
    delete t;
    return r;
}
void display()
{
    while(top)
    {
        cout<<top->data<<endl;
        top=top->next;
    }
}

int main()
{
    push(3);
    push(5);
    push(7);
    push(9);
    push(11);
    // cout<<"\n";
    // cout<<"the popped element is:"<<pop()<<endl;
    // cout<<"the popped element is:"<<pop()<<endl;
    cout<<"peeked element is:"<<peek(4)<<endl;
    cout<<"top element is:"<<stacktop()<<endl;
    if(isempty()) cout<<"the stack is empty"<<endl;
    else cout<<"the stack is not empty"<<endl;
    if(isfull()) cout<<"the stack is full"<<endl;
    else cout<<"the stack is not full"<<endl;
    push(13);



    display();
    // cout<<"peeked element is:"<<peek(1);


}