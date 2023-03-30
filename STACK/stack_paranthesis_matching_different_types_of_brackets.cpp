#include<iostream>
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
int isempty(struct stack st)
{
    if(st.top==-1)
    // cout<<"stack is empty"<<endl;
    return 1;
    else 
    // cout<<"stack is not empty"<<endl;
    return 0;
}
int isbalance(char *exp)
{
    struct stack st;
    st.size=strlen(exp);
    st.top=-1;
    st.s=new char[st.size];

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(') push(&st,exp[i]);
        else if(exp[i]=='{') push(&st,exp[i]);
        else if(exp[i]=='[') push(&st,exp[i]);
        else
        {
            if(isempty(st)) return 0;
            else if(st.s[st.top]=='(' && exp[i]==')') pop(&st);
            else if(st.s[st.top]=='{' && exp[i]=='}') pop(&st);
            else if(st.s[st.top]=='[' && exp[i]==']') pop(&st);
        }
    }
    return isempty(st)?1:0;
}
int main()
{
    char *exp="{([a+b]*[c-d]/e)}";
    cout<<isbalance(exp);
    return 0;
}