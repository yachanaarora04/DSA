#include<iostream>
using namespace std;
struct element
{
    int i,j,x;
};
struct sparse
{
    int m,n,num;
    struct element *e;
};
void create(struct sparse *s)
{
    int i;
    cout<<"enter the dimensions ";
    cin>>s->m>>s->n;
    cout<<"enter the number of non zero elements ";
    cin>>s->num;
    s->e=new element[s->num];
    cout<<"enter all the non zero elements ";
    for(i=0;i<s->num;i++)
    {
        cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
    }
}
struct sparse *add(struct sparse *s1, struct sparse *s2)
{
    struct sparse *sum;
    int i,j,k;
    i=j=k=0;
    sum=new sparse;
    sum->e=new element[s1->num+s2->num]; 
    if(s1->m!=s2->m || s1->n!=s2->n)
    return 0;
    else
    
    {
    while(i<s1->num && j<s2->num)
    {
        if(s1->e[i].i<s2->e[j].i)
        {
            sum->e[k]=s1->e[i];
            k++; i++;
        }
        else if(s1->e[i].i>s2->e[j].i)
        {
            sum->e[k]=s2->e[j];
            k++; j++;
        }
        else
        {
            if(s1->e[i].j<s2->e[j].j)
            {
                sum->e[k]=s1->e[i];
                k++; i++;
            }
            else if(s1->e[i].j>s2->e[j].j)
            {
                sum->e[k]=s2->e[j];
                k++; j++;
            }
            else
            {
                sum->e[k]=s1->e[i];
                sum->e[k++].x=s2->e[j++].x+s1->e[i++].x;
                
            }

        }
        
    }
    for(;i<s1->num;i++)
        sum->e[k++]=s1->e[i];
     for(;j<s2->num;j++)
        sum->e[k++]=s2->e[j];
    sum->m=s1->m;
    sum->n=s1->n;
    sum->num=k;

    return sum;

    }

}
void display(struct sparse s)
{
    int i,j,k=0;
    for(i=1;i<=s.m;i++)
    {
        for(j=1;j<=s.n;j++)
        {
            if(i==s.e[k].i && j==s.e[k].j)
            {
                cout<<s.e[k].x<<" ";
                k++;
            }
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    struct sparse s1,s2,*s3;
    
    create(&s1);
    create(&s2);
    s3=add(&s1,&s2);
    cout<<"first matrix is: \n";
    display(s1);
    cout<<"second matrix is: \n";
    display(s2);
    cout<<"resultant sum matrix is:\n";
    display(*s3);

    return 0;
}