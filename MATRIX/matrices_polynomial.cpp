#include<iostream>
using namespace std;
struct term
{
    int coeff;
    int exp;
};
struct poly
{
    int n;
    struct term *t;
};
void create(struct poly *p)
{
    int i;
    cout<<"enter the number of terms: ";
    cin>>p->n;
    p->t=new term[p->n];
    cout<<"enter the terms:\n";
    for(i=0;i<p->n;i++)
    {
        cin>>p->t[i].coeff>>p->t[i].exp;
    }
}
void display(struct poly p)
{
    int i;
    for(i=0;i<p.n;i++)
    {
        cout<<p.t[i].coeff<<"x"<<p.t[i].exp<<"+";
    }
    cout<<endl;
}
struct poly *add(struct poly *p1, struct poly *p2)
{
    struct poly *sum;

    int i,j,k;
    i=j=k=0;
    sum=new poly;
    sum->t=new term[p1->n+p2->n];
    while(i<p1->n && j<p2->n)
    {
        if(p1->t[i].exp < p2->t[j].exp)
        sum->t[k++]=p2->t[j++];
        else if(p1->t[i].exp > p2->t[j].exp)
        sum->t[k++]=p1->t[i++];
        else
        {
            sum->t[k].exp=p1->t[i].exp;
            sum->t[k++].coeff=p1->t[i++].coeff+p2->t[j++].coeff;
        }
    }
    for(;i<p1->n;i++)
    sum->t[k++]=p1->t[i];
    for(;j<p2->n;j++)
    sum->t[k++]=p2->t[j];
    sum->n=k;
    return sum;
}
int main()
{
    struct poly p1,p2,*p3;

    create(&p1);
    create(&p2);
    p3=add(&p1,&p2);
    cout<<"first polynomial is:\n";
    display(p1);
    cout<<"second polynomial is:\n";
    display(p2);
    cout<<"added polynomial is:\n";
    display(*p3);
    return 0;

}