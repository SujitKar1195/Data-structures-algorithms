#include <iostream>
#include <queue> // use for creating BinaryTree
#include <stack> //for traversing in,pre,post
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

class BinaryTree
{

public:
    Node *createTree();
    void postOrderRecursive(Node *p);
    void postOrderIterative(Node *p);
};

Node *BinaryTree::createTree()
{
    queue<Node *> q;
    Node *p, *t;
    Node *root;
    cout << "Enter root->data: " << endl;
    int x;
    cin >> x;
    root = new Node(x);
    q.push(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();

        cout << p->data << " 's left child:\n";
        int x;
        cin >> x;
        if (x != -1)
        {
            t = new Node(x);
            p->left = t;
            q.push(t);
        }

        cout << p->data << " 's right child:\n";
        cin >> x;
        if (x != -1)
        {
            t = new Node(x);
            p->right = t;
            q.push(t);
        }
    }

    return root;
}


void BinaryTree::postOrderRecursive(Node *p)
{
    if (p != NULL)
    {
        postOrderRecursive(p->left);
        cout << p->data << " ";
        postOrderRecursive(p->right);
    }
}

int main()
{

    BinaryTree t;
    Node *root = t.createTree();

    cout << "postOrder Traversal: " << endl;
    t.postOrderRecursive(root);

    cout << endl;

    return 0;
}