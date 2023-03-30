#include<iostream>
using namespace std;
struct node
{
    struct node *lchild;
    int data;
    int height;
    struct node *rchild;
}*root=NULL;
int nodeheight(struct node *p)
{
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;
    return hl>hr?hl+1:hr+1;
}
int balancefactor(struct node *p)
{
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;
    return hl-hr;
}
struct node * LLRotation(struct node *p)
{
    struct node *pl=p->lchild,*plr=pl->rchild;
    pl->rchild=p;
    p->lchild=plr;
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    if(root==p)
        root=pl;
    return pl;
}
struct node * LRRotation(struct node *p)
{
    struct node *pl=p->lchild,*plr=pl->rchild;
    
    p->lchild=plr->rchild;
    pl->rchild=plr->lchild;
    plr->rchild=p;
    plr->lchild=pl;
    pl->height=nodeheight(pl);
    plr->height=nodeheight(plr); 
    p->height=nodeheight(p);
    if(root==p) root=plr;
    return plr;
}
struct node * RRRotation(struct node *p)
{
    struct node *pr=p->rchild,*prl=pr->lchild;
    pr->lchild=p;
    p->rchild=prl;
    pr->height=nodeheight(pr);
    p->height=nodeheight(p);

    if(root==p) root=pr;
    return pr;
}
struct node * RLRotation(struct node *p)
{
    struct node *pr=p->rchild,*prl=pr->lchild;
    p->rchild=prl->lchild;
    pr->lchild=prl->rchild;
    prl->lchild=p;
    prl->rchild=pr;
    prl->height=nodeheight(prl);
    p->height=nodeheight(p);
    pr->height=nodeheight(pr);
    if(root==p) root=prl;
    return prl;
}
node *reinsert(struct node *p,int key)
{
    struct node *t=NULL;
    if(p==NULL)
    {
        t=new node;
        t->data=key;
        t->height=1;
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
    p->height=nodeheight(p);
    cout<<balancefactor(p)<<endl;
    
    if(balancefactor(p)==2 && balancefactor(p->lchild)==1)
    {
        return LLRotation(p);
    }
    else if(balancefactor(p)==2 && balancefactor(p->lchild)==-1)
    {
        return LRRotation(p);
    }
    else if(balancefactor(p)==-2 && balancefactor(p->rchild)==-1)
    {
        return RRRotation(p);
    }
    else if(balancefactor(p)==-2 && balancefactor(p->rchild)==1)
    {
        return RLRotation(p);
    }
    return p;
}

int main()
{
    root=reinsert(root,30);
    reinsert(root,50);
    reinsert(root,40);
    cout<<root->data<<endl;
    cout<<root->lchild->data<<endl;
    cout<<root->rchild->data<<endl;
    cout<<balancefactor(root)<<endl;
    cout<<balancefactor(root->lchild)<<endl;
    cout<<nodeheight(root->lchild);
    return 0;
}
