#include<iostream>
using namespace std;
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue *q, int s)
{
    q->size=s;
    q->Q=new int[q->size];
    q->rear=q->front=-1;

}
void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size-1)
    cout<<"the queue is full"<<endl;
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct queue *q)
{
    int x=-1;
    if(q->rear==q->front)
    cout<<"queue is empty"<<endl;
    else
    {
        q->front++;
        x=q->Q[q->front];
        // delete q->Q[q->front];
    }
    return x;
}
void display(struct queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.Q[i]<<endl;
    }
}
int main()
{
    struct queue q;
    int a;
    cout<<"enter the size of queue";
    cin>>a;
    create(&q,a);
    
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);
    enqueue(&q,6);
    // enqueue(&q,5);
    cout<<"\n";
    cout<<"the deleted value is:"<<dequeue(&q)<<endl;
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    display(q);
}
