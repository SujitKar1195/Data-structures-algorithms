#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int size;
    int front;
    int rear;
    int *q;
};

bool isEmpty(Queue *q)
{
    return  (q->front == q->rear);
}

bool isFull(Queue *q)
{
    return (q->rear == q->size-1);
}


void enqueue(Queue *q, int x)
{
    if (isFull(q))
        cout << "Queue is full\n";
    else
    {
        q->rear++;
        q->q[q->rear] = x;   
    }
}

int dequeue(Queue *q)
{
    int x = -1;
    if (isEmpty(q))
    {
        cout << "Queue is empty\n";
    }
    else
    {
        q->front++;
        x = q->q[q->front];
    }

    return x;
}

int main()
{
    class Queue Q;

    cout << "Enter Queue size: ";
    cin >> Q.size;

    Q.front = Q.rear = -1;
    Q.q = new int[Q.size];

    

    return 0;
}