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
void levelorder(struct node *p)
{
    struct cqueue q;
    create(&q,100);
    cout<<p->data<<" ";
    enqueue(&q,p);
    while(!isempty(q))
    { 
        p=dequeue(&q);
        if(p->lchild)
        {
            cout<<p->lchild->data<<" ";
            enqueue(&q,p->lchild);
        }
        if(p->rchild)
        {
            cout<<p->rchild->data<<" ";
            enqueue(&q,p->rchild);
        }
    }
}
int countnumberofnodes(struct node *p)
{
    int x,y;
    if(p)
    {
        x=countnumberofnodes(p->lchild);
        y=countnumberofnodes(p->rchild);
        return x+y+1;
    }
    return 0;
}
int nodes_degree_two(struct node *p)
{
    int x,y;
    if(p)
    {
        x=nodes_degree_two(p->lchild);
        y=nodes_degree_two(p->rchild);
        if(p->lchild && p->rchild)
        return x+y+1;
        else return x+y;
    }
    return 0;
}
int add_all_elements_data(struct node *p)
{
    int x,y;
    if(p)
    {
        x=add_all_elements_data(p->lchild);
        y=add_all_elements_data(p->rchild);
        return x+y+p->data;
    }
    return 0;
}
int levelcount(struct node *p)
{
    int x,y;
    if(p)
    {
        x=levelcount(p->lchild);
        y=levelcount(p->rchild);
        if(x>y)
        return x+1;
        else return y+1;
    }
    return 0;
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
    // cout<<"levelorder"<<endl;
    // levelorder(root);
    // cout<<"preorder"<<endl;
    // preorder(root);
    // cout<<endl;
    // cout<<"inorder"<<endl;
    // inorder(root);
    // cout<<endl;
    // cout<<"postorder"<<endl;
    // postorder(root);
    cout<<"number of nodes in the tree:"<<countnumberofnodes(root)<<endl;
    cout<<"number of nodes with degree two on the tree: "<<nodes_degree_two(root)<<endl;
    cout<<"sum of all elements data: "<<add_all_elements_data(root)<<endl;
    cout<<"number of levels in the tree: "<<levelcount(root);
    return 0;
}
