// Separate Chaining

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void sortedInsert(Node **head, int data)
{
    Node *newNode = new Node(data);
    Node *cur = *head;
    Node *q = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    else
    {
        while (cur && cur->data < data)
        {
            q = cur;
            cur = cur->next;
        }

        if (cur == *head)
        {
            newNode->next = cur;
            *head = newNode;
        }
        else
        {
            newNode->next = q->next;
            q->next = newNode;
        }
    }
}

int hashIndex(int key)
{
    return key % 10;
}

void insert(Node *A[], int key)
{
    int index = hashIndex(key);
    sortedInsert(&A[index], key);
}

Node *search(Node *A, int key)
{
    Node *cur = A;
    while (cur)
    {
        if (cur->data == key)
            return cur;
        cur = cur->next;
    }
    return NULL;
}

void display(Node *A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Node *cur = A[i];
        while (cur)
        {
            cout << cur->data;
            if (cur->next)
                cout << " -> ";
            cur = cur->next;
        }
        cout << endl;
    }
}

int main()
{

    Node *Arr[10];
    for (int i = 0; i < 10; i++)
        Arr[i] = NULL;

    int no;
    cout << "No of keys: ";
    cin >> no;

    system("cls");
    cout << "<----Enter keys:-----> " << endl;

    for (int i = 0; i < no; i++)
    {
        int x;
        cin >> x;
        insert(Arr, x);
    }

    int i;
    cout << "Enter searching key: ";
    cin >> i;

    int index = hashIndex(i);

    Node *temp = search(Arr[index], i);
    if (temp)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Invalid search" << endl;
    }

    display(Arr, 10);

    return 0;
}