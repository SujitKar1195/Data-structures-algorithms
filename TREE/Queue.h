#include <iostream>
using namespace std;
class Node
{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};
class Queue
{
private:
    int size;
    int front;
    int rear;
    Node **Q;

public:
    Queue()
    {
        front = rear = -1;
        this->size = 10;
        Q = new Node *[this->size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new Node*(this->size);
    }
    void enqueue(Node * x);
    Node * dequeue();
    void display();
};

void Queue::enqueue(Node * x)
{
    if (rear == size - 1)
    {
        cout << "Queue is full\n";
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}

Node * Queue::dequeue()
{
    int x = -1;
    if (front == rear)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        x = Q[front+1];
        front++;
    }
    return x;
}


void Queue::display()
{
    for(int i = front+1;i<=rear;i++)
    {
        cout << Q[i] <<" ";
    }
    cout << endl;
}