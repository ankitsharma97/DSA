#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"full";
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        cout<<"NULL";
    }
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
int main()
{
     struct Queue q;
     cin>>q.size;
     q.Q = new int[q.size];
     q.front=q.rear=-1;
}
