#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->next = NULL;
        this->data = data;
    }
} *first = NULL;

int takingInput()
{
    int count = 0;
    int data;
    cout << "Enter data: ";
    cin >> data;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (first == NULL)
        {
            first = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
        count++;
    }
    return count;
}

void display(Node *head)
{
    Node *p = head;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void reverse(Node *head, int *a, int l)
{
    Node *p = head;
    int i = 0;
    while (p)
    {
        a[i++] = p->data;
        p = p->next;
    }

    i--, p = head;

    while (p)
    {
        p->data = a[i--];
        p = p->next;
    }
}

int main()
{
    int length = takingInput();
    cout << "Before Reversing : ";
    display(first);
    cout << endl;
    int l = length;
    int a[l];
    reverse(first, a, length);
    cout << "After reversing list: ";
    display(first);
}