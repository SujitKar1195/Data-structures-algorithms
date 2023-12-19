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
    void inOrderRecursive(Node *p);
    void inOrderIterative(Node *p);
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

void BinaryTree::inOrderRecursive(Node *p)
{
    Node *t = p;
    stack<Node *> st;
    while (t != NULL || !st.empty())
    {
        if (t != NULL)
        {
            st.push(t);
            
            t = t->left;
        }
        else
        {
            t = st.top();
            st.pop();
            cout << t->data << " ";
            t = t->right;
        }
    }
}

void BinaryTree::inOrderIterative(Node *p)
{
    if (p != NULL)
    {
        inOrderRecursive(p->left);
        cout << p->data << " ";
        inOrderRecursive(p->right);
    }
}

int main()
{

    BinaryTree t;
    Node *root = t.createTree();

    cout << "Inorder Traversal: " << endl;
    // t.inOrderRecursive(root);
    t.inOrderIterative(root);

    cout << endl;

    return 0;
}