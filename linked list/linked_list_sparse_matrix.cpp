#include<iostream>
using namespace std;
struct node 
{
    int col;
    int val;
    node *next;
}*first=NULL;
// void create(struct node A,int m,int n)
// {
    
//     struct node *last;
//     cout<<"enter the column number and data:";
//     for(int i=0;i<m;i++)
//     {
//         A[i]=new node;
//         cin>>A[i]->col>>A[i]->val;
//         A[i]->next=NULL;
//         if(first==NULL)
//         {
//             first=last=A[i];
//         }
//         else
//         {
//             last->next=A[i];
//             last=A[i];

//         }
//     }
// }
// void display(struct node *p,int m,int n,struct node A)
// {
//     for(int i=0;i<m;i++)
//     {
//         p=A[i];
//         for(int j=0;j<n;j++)
//         {
//             if(j==p->col)
//             {
//                 cout<<p->val;
//                 p=p->next;

//             }
//             else cout<<"0";

//         }
//     }
// }
int main()
{
    int m,n,size;
    cout<<"enter number of rows and columns:";
    cin>>m>>n;
    struct node *A[m];
    struct node *t,*last;
    cout<<"enter the number of elements to be printed:";
    cin>>size;
    cout<<"enter the column number and data:";
    for(int i=0;i<m;i++)
    {
        A[i]=new node;

        
            cin>>A[i]->col>>A[i]->val;
            A[i]->next=NULL;
        
        if(first==NULL)
        {
            first=last=A[i];
        }
        else
        {
            t=new node;
            t=A[i];
            last=A[i];
            last->next=t;
            last=t;
            t->next=NULL;
        }
    }
    // create(*A,m,n);
    for(int i=0;i<m;i++)
    {
        struct node *p;
        p=A[i];
        for(int j=0;j<n;j++)
        {
            if(j==p->col)
            {
                cout<<p->val<<"  ";
                p=p->next;

            }
            else cout<<"0 ";

        }
        cout<<endl;
    }

    // display(first,m,n,*A);
}