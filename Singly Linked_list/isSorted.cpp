#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
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

void isSorted(Node *head)
{
    int x = INT_MIN;
    Node *a = head;
    int f = 1;
    while (a)
    {
        if (a->data < x)
        {
            cout << "List is not sorted\n";
            f = 0;
            break;
        }
        x = a->data;
        a = a->next;
    }

    if (f)
    {
        cout << "List is sorted\n";
    }
}

int main()
{
    Node *head = takingInput();

    isSorted(head);

    return 0;
}