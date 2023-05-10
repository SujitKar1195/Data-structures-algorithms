#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

bool isFull(Queue *q)
{
    return q->rear == (q->front + 1) % q->size;
}

void enqueue(Queue *q, int x)
{
    if (isFull(q))
        cout << "Q is full\n";
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

bool isEmpty(Queue *q)
{
    return (q->front == q->rear);
}

int dequeue(Queue *q)
{
    int x = -1;
    if (isEmpty(q))
        cout << "Q is empty\n";
    else
    {
        q->front = (q->front+1)%q->size;
        x = q->Q[q->front];
    }
    return x;
}



int main()
{

    Queue q;
    cout << "Enter size: ";
    cin >> q.size;
    q.Q = new int[q.size];
    q.front = q.rear = 0;
    cout << dequeue(&q) << endl;

    return 0;
}