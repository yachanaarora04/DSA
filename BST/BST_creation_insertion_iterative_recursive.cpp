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
int search(struct node *p,int key)
{
    while(p)
    {
        if(p->data==key)
        return 1;

        else if(p->data<key)
        p=p->rchild;
        else p=p->lchild;
    }
    return 0;

}
int rsearch(struct node *p,int key)
{
    if(p)
    {
        if(p->data==key)
        return 1;
        else if(p->data<key)
        return rsearch(p->rchild,key);
        else return rsearch(p->lchild,key);
    }
    return 0;

}
int height(struct node *p)
{
    int x,y;
    if(p)
    {
        x=height(p->lchild);
        y=height(p->rchild);
        if(x>y) return x+1;
        else return y+1;
    }
}
struct node *inpre(struct node *p)
{
    while(p && p->rchild)
        p=p->rchild;
    return p;
}
struct node *insuc(struct node *p)
{
    while(p && p->lchild)
        p=p->lchild;
    return p;    
}
struct node *deletee(struct node *p,int key)
{
    struct node *q=NULL;
    if(p==NULL) return NULL;
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root) root=NULL;
        delete p;
        return NULL;
    }

    if(key<p->data)
        p->lchild=deletee(p->lchild,key);
    else if(key>p->data)
        p->rchild=deletee(p->rchild,key);
    else 
    {
        if(height(p->lchild)>height(p->rchild))
        {
            q=inpre(p->lchild);
            p->data=q->data;
            p->lchild=deletee(p->lchild,q->data);
        }
        else
        {
            q=insuc(p->rchild);
            p->data=q->data;
            p->rchild=deletee(p->rchild,q->data);
        }
    }    
    return p;
}
int main()
{
    int temp;
    root=reinsert(root,20);
    reinsert(root,10);
    reinsert(root,30);
    reinsert(root,15);
    reinsert(root,35);
    deletee(root,30);
    temp=rsearch(root,30);
    if(temp==1) cout<<"element found\n";
    else cout<<"element not found\n";
    

    inorder(root);
    return 0;
}