#include<iostream>
#include<string.h>
using namespace std;
struct stack
{
    int size;
    int top;
    char *s;
};
void push(struct stack *st,char ele)
{

    if(st->top==st->size-1)
        cout<<"stack overflow"<<endl;
    else
    {
        st->top++;
        st->s[st->top]=ele;
    }

}
char pop(struct stack *st)
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
int stacktop(struct stack st)
{
    if(st.top==-1)
    return -1;
    else
    return st.s[st.top];

}
int isempty(struct stack st)
{
    if(st.top==-1)
    // cout<<"stack is empty"<<endl;
    return 1;
    else 
    // cout<<"stack is not empty"<<endl;
    return 0;
}    
int isoperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
    return 0;
    else return 1;
}
int pre(char x)
{
    if(x=='+'||x=='-')
    return 1;
    else if(x=='*'||x=='/')
    return 2;
    else return 0;
}
char *convert(struct stack st,char *infix)
{
    // struct stack st;
    
    // int len=strlen(infix);
    char *postfix=new char[st.size+2];
    int i=0,j=0;
    while(infix[i]!='\0')
    {
        if(isoperand(infix[i]))
        postfix[j++]=infix[i++];
        else
        {
            if(pre(infix[i])>pre(stacktop(st))) 
            push(&st,infix[i++]);
            else
            postfix[j++]=pop(&st);
        }
    }
    while(!isempty(st))
    {
        postfix[j++]=pop(&st);
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    // struct stack st;
    
    struct stack st;
    char *infix="a+b*c-d";
    st.size=strlen(infix);
    st.top=-1;
    st.s=new char[st.size];
    push(&st,'#');
    char *postfix=convert(st,infix);
    puts(postfix);
    return 0;
}