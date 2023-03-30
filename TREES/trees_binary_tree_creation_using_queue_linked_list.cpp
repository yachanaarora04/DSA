#include<iostream>
using namespace std;
struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;
struct cqueue
{
    int size;
    int front;
    int rear;
    struct node **Q;
};
void create(struct cqueue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=(struct node**)malloc(q->size*sizeof(struct node*));
}
void enqueue(struct cqueue *q,struct node *x)
{
    if((q->rear+1)%q->size==q->front)
    cout<<"the queue is full"<<endl;
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

struct node * dequeue(struct cqueue *q)
{
    struct node* x=NULL;
    if(q->front==q->rear)
    cout<<"queue is empty"<<endl;
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;

}
int isempty(struct cqueue q)
{
    return q.front==q.rear;
}

void treecreate()
{
    struct node *p,*t;
    int x;
    struct cqueue q;
    create(&q,100);
    cout<<"enter root value";
    cin>>x;
    root=new node;
    root->data=x;
    root->lchild=root->rchild=0;
    enqueue(&q,root);
    while(!isempty(q))
    {
        p=dequeue(&q);
        cout<<"enter the left child of "<<p->data;
        cin>>x;
        if(x!=-1)
        {
            t=new node;
            t->data=x;
            t->rchild=t->lchild=0;
            p->lchild=t;
            enqueue(&q,t);
        }
        cout<<"enter the right child of "<<p->data;
        cin>>x;
        if(x!=-1)
        {
            t=new node;
            t->data=x;
            t->rchild=t->lchild=0;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
 }
void preorder(struct node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}
void postorder(struct node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}
int main()
{
    // struct cqueue q;
    // cout<<"enter the size of queue";
    // cin>>q.size;
    // void create()
    // q.front=q.rear=0;
    // q.Q=new int[q.size];
    treecreate();
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"inorder"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"postorder"<<endl;
    postorder(root);
    return 0;
}
