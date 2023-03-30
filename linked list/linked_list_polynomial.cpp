#include<iostream>
#include<cmath>
using namespace std;
struct node 
{
    int coeff;
    int ind;
    struct node *next;
}*first=NULL;
void create()
{
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    // int sum=0;
    struct node *last,*t;
    for(int i=0;i<n;i++)
    {
        t=new node;
        cin>>t->coeff>>t->ind;
        t->next=NULL;
        if(first==NULL)
        {
            first=last=t;
        }
        else
        {
            last->next=t;
            last=t;
        }
    }
}
int sum(struct node *p,int x)
{
    int sum=0;
    while(p)
    {
        sum+=p->coeff*pow(x,p->ind);
        p=p->next;
    }
    return sum;
}
void display(struct node *p)
{
    while(p)
    {
        cout<<p->coeff<<"x"<<p->ind<<" + ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    create();
    display(first);
    cout<<"sum="<<sum(first,2);
}