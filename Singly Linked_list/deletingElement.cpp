#include <iostream>

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

Node *takeinput()

{

    int data;
    cout << "enter data (-1 for terminating):\n";
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

Node *deleting(Node *head, int pos)
{
    if (pos == 1)
    {
        Node *p = head;
        head = head->next;
        int x = p->data;
        delete p;
    }
    else
    {
        Node *p = head, *q;
        for (int i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        int x = p->data;
        delete p;
    }
    return head;
}

void displayNode(Node *head)
{

    Node *temp = head;

    while (temp != NULL)

    {

        cout << temp->data << " ";

        temp = temp->next;
    }
}

int main()

{

    Node *head = takeinput();
    cout << "Before deleting: ";
    displayNode(head);
    cout << endl;

    int pos;
    cout << "Enter the position of the given element:\n";
    cin >> pos;
    head = deleting(head, pos);
    cout << "After deleting: ";

    displayNode(head);

    return 0;
}