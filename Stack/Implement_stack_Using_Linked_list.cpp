#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack() { top = NULL; }
    void push(int data);
    int pop();
    void Display();
};

void Stack::push(int data)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Stack Overflow\n";
    else
    {
        t->data = data;
        t->next = top;
        top = t;
    }
}

int Stack::pop()
{
    int x = -1;
    if (top == NULL)
    {
        cout << "Stack UnderFlow\n";
    }
    else
    {
        Node *t = top;
        x = top->data;
        top = top->next;
        delete t;
    }
    return x;
}

void Stack::Display()
{
    Node *t = top;
    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack elements are  : ";
    s.Display();
    cout << endl;

    s.pop();
    cout << "After popping Stack, Stack elements are  : ";
    s.Display();
    cout << endl;

    return 0;
}