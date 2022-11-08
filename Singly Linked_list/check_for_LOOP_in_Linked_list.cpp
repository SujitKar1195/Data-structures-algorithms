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
    cout << "Enter data : ";
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
    Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int check(Node *first)
{
    Node *p = first;
    Node *q = first;
    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);
    if (p == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    Node *first = takingInput();
    cout << "First linked list : ";
    display(first);

    // creating loop;
    // assume that list : 1 2 3 4 5;
    //  t1 is pointing to 3, and t2 is in 5 and t2's next is pointing to t1;
    Node *t1, *t2;
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;

    if (check(first))
    {
        cout << "Yes! here is LOOP\n";
    }
    else
    {
        cout << "No! here is no LOOP\n";
    }
}
