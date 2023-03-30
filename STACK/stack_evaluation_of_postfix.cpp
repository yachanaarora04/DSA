#include<iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    char *s;
};
struct stackk
{
    int size;
    int top;
    int *s;
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
void push(struct stackk *st,char ele)
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
char pop(struct stackk *st)
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
int stacktop(struct stackk st)
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
int isempty(struct stackk st)
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
int evaluate(char *postfix)
{
    struct stackk st1;
    st1.size=strlen(postfix);
    st1.top=-1;
    st1.s=new int[st1.size];
    int i,x1,x2,r;
    for(i=0;postfix[i]!=0;i++)
    {
        if(isoperand(postfix[i]))
            push(&st1,postfix[i]-'0');
        else
        {
            x2=pop(&st1);
            x1=pop(&st1);
            switch(postfix[i])
            {
                case '+':r=x1+x2;
                        push(&st1,r);
                        break;
                case '-':r=x1-x2;
                        push(&st1,r);
                        break;
                case '*':r=x1*x2;
                        push(&st1,r);
                        break;
                case '/':r=x1/x2;
                        push(&st1,r);
                        break;

            }
        }
    }
    return pop(&st1);
}
int main()
{
    // struct stack st;
    
    struct stack st;
    char *infix="2+3*4-8/2";
    st.size=strlen(infix);
    st.top=-1;
    st.s=new char[st.size];
    // push(&st,'#');
    char *postfix=convert(st,infix);
    // puts(postfix);
    cout<<"the postfix expression is:"<<postfix<<endl;
    cout<<"result of the exaluated expression is:"<<evaluate(postfix);
    return 0;
}