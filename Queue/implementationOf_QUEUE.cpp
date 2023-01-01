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

void enqueue(Queue *q, int x)
{
    if (q->rear == q->size - 1)
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
    if (q->front == q->rear)
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

    enqueue(&Q, 10);

    enqueue(&Q, 20);

    enqueue(&Q, 30);

    enqueue(&Q, 40);

    enqueue(&Q, 50);

    cout << dequeue(&Q);

    return 0;
}