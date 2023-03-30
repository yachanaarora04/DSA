#include<iostream>
using namespace std;
struct cqueue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(struct cqueue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
    cout<<"the queue is full"<<endl;
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct cqueue *q)
{
    int x=-1;
    if(q->front==q->rear)
    cout<<"queue is empty"<<endl;
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;

}
void display(struct cqueue q)
{
    int i=q.front+1;
    do
    {
        cout<<q.Q[i]<<endl;
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
}
int main()
{
    struct cqueue q;
    cout<<"enter the size of queue";
    cin>>q.size;
    q.front=q.rear=0;
    q.Q=new int[q.size];
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    dequeue(&q);
    enqueue(&q,4);
    
    // enqueue(&q,5);
    dequeue(&q);
    dequeue(&q);
    cout<<endl;
    cout<<dequeue(&q);
    cout<<endl;
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // enqueue(&q,6);
    // enqueue(&q,6);
    // enqueue(&q,5);
    // enqueue(&q,4);
    // dequeue(&q);
    // dequeue(&q);
    display(q);
    return 0;
}
