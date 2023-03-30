#include<iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};
void push(struct stack *st,int ele)
{

    if(st->top==st->size-1)
        cout<<"stack overflow"<<endl;
    else
    {
        st->top++;
        st->s[st->top]=ele;
    }

}
void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    cout<<st.s[i]<<endl;

}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
        cout<<"stack underflow"<<endl;
    else
    {
        x=st->s[st->top];
        st->top--;
    } 
    return x;   
}
int peek(struct stack st,int ind)
{
    int x=-1;
    if(st.top-ind+1<0)
    cout<<"the index is invalid";
    else
        x=st.s[st.top-ind+1];
    return x;    

}
int stacktop(struct stack st)
{
    if(st.top==-1)
    return -1;
    else
    return st.s[st.top];

}
void isempty(struct stack st)
{
    if(st.top==-1)
    cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;
}
void isfull(struct stack st)
{
    if(st.top==st.size-1)
    cout<<"stack is full"<<endl;
    else cout<<"stack is not full"<<endl;
}
int main()
{
    struct stack st;
    cout<<"enter the size of stack:";
    cin>>st.size;
    st.s=new int[st.size];
    st.top=-1;
    push(&st,1);
    push(&st,2);
    // pop(&st);
    push(&st,3);
    push(&st,4);
    push(&st,5);
    push(&st,6);
    cout<<endl;
    cout<<"the element to be peeked is"<<peek(st,2)<<endl;
    // cout<<"the popped element is:"<<pop(&st)<<endl;
    // cout<<pop(&st);
    // cout<<pop(&st);
    // cout<<pop(&st);
    cout<<"element at the top is:"<<stacktop(st)<<endl;
    isempty(st);
    isfull(st);
    
    cout<<"the final stack is:"<<endl;
    display(st);
    return 0;
}