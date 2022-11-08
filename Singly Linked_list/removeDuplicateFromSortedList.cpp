#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takingInput()
{
    int data;
    cout << "Enter data: ";
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }

    return head;
}

void display(Node *first)
{
    Node *a = first;
    while (a)
    {
        cout << a->data << " ";
        a = a->next;
    }

    cout << endl;
}

Node *removeDuplicate(Node *first)
{
    Node *p = first;
    Node *q = first->next;

    while (q)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }

    return first;
}

int main()
{
    Node *head = takingInput();
    cout << "Before : ";
    display(head);

    cout << "After : ";
    head = removeDuplicate(head);

    display(head);
}