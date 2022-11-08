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

Node *merge(Node *first, Node *second)
{
    Node *third = NULL;
    Node *last = NULL;
    if (first->data < second->data)
    {
        third = first;
        last = first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        third = second;
        last = second;
        second = second->next;
        last->next = NULL;
    }

    while (first && second)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = last->next;
            first = first->next;
            last->next = NULL;
        }
        else
        {
            last->next = second;
            last = last->next;
            second = second->next;
            last->next = NULL;
        }
    }
    while (first)
    {
        last->next = first;
        last = last->next;
        first = first->next;
    }
    while (second)
    {
        last->next = second;
        last = last->next;
        second = second->next;
    }

    return third;
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

    Node *newlink = merge(first, second);

    cout << "After merging 2 linked list : ";
    display(newlink);
}
