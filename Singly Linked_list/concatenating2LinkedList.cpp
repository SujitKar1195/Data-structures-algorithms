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
void display(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

Node *concatenate(Node *first, Node *second)
{
    Node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = second;
    return first;
}

int main()
{
    cout << "Taking Input for First linked list: ";
    Node *first = takingInput();
    cout << "First linked list : ";
    display(first);
    cout << "Taking Input for Second linked list: ";
    Node *second = takingInput();
    cout << "Second linked list : ";
    display(second);

    cout << endl;

    Node *newlink = concatenate(first, second);

    cout << "After concatenating 2 linked list : ";
    display(newlink);
}
