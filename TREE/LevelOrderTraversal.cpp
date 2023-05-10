#include <iostream>
#include <queue> // use for creating BinaryTree

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
    void levelorder(Node *p);
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

void BinaryTree::levelorder(Node *p)
{
    queue<Node*>q;
    cout << p->data << " ";
    q.push(p);
    while(!q.empty())
    {
        p = q.front();
        q.pop();
        if(p->left)
        {
            cout << p->left->data << " ";
            q.push(p->left);
        }
        if(p->right)
        {
            cout << p->right->data << " ";
            q.push(p->right);
        }
    }
}


int main()
{

    BinaryTree t;
    Node *root = t.createTree();

    cout << "Levelorder Traversal: " << endl;
    
    t.levelorder(root);
    cout << endl;

    return 0;
}