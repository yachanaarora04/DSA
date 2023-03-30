#include<iostream>
using namespace std;
struct node 
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;

void insert(int n)
{
    struct node*t=root;
    struct node *r=NULL,*p;
    if(root==NULL)
    {
        p=new node;
        p->data=n;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t)
    {
        r=t;
        if(t->data==n)
        return;
        else if(t->data<n)
        t=t->rchild;
        else t=t->lchild;
    }
    p=new node;
    p->data=n;
    p->lchild=p->rchild=NULL;
    if(p->data<r->data) r->lchild=p;
    else r->rchild=p;
}

node *reinsert(struct node *p,int key)
{
    struct node *t=NULL;
    if(p==NULL)
    {
        t=new node;
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(key<p->data)
    {
        p->lchild=reinsert(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=reinsert(p->rchild,key);
    }
    return p;

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
int main()
{
    root=reinsert(root,20);
    reinsert(root,10);
    reinsert(root,30);
    reinsert(root,15);
    reinsert(root,35);

    inorder(root);
    return 0;
}