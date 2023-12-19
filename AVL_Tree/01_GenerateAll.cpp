#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *lChild;
    int data;
    int height;
    Node *rChild;

    Node(int data)
    {
        this->data = data;
        this->height = 1;
        this->lChild = this->rChild = nullptr;
    }

} *root = NULL;

int NodeHeight(Node *p)
{
    int hl, hr;
    hl = p && p->lChild ? p->lChild->height : 0;
    hr = p && p->rChild ? p->rChild->height : 0;

    return 1 + max(hl, hr);
}

int BalanceFactor(Node *p)
{
    int hl, hr;
    hl = p && p->lChild ? p->lChild->height : 0;
    hr = p && p->rChild ? p->rChild->height : 0;
    return (hl - hr);
}

Node *LLRotation(Node *p)
{
    Node *pl = p->lChild;
    Node *plr = pl->rChild;
    pl->rChild = p;
    p->lChild = plr;

    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    if (root == p)
        root = pl;
    return pl;
}
Node *LRRotation(Node *p)
{
    return nullptr;
}
Node *RRRotation(Node *p)
{
    return nullptr;
}
Node *RLRotation(Node *p)
{
    return nullptr;
}

Node *rInsert(Node *p, int key)
{
    Node *t = nullptr;
    if (p == nullptr)
    {
        t = new Node(key);
        return t;
    }
    if (key < p->data)
    {
        p->lChild = rInsert(p->lChild, key);
    }
    else if (key > p->data)
    {
        p->rChild = rInsert(p->rChild, key);
    }

    p->height = NodeHeight(p);

    if (BalanceFactor(p) == 2 && BalanceFactor(p->lChild) == 1)
        return LLRotation(p);

    else if (BalanceFactor(p) == 2 && BalanceFactor(p->lChild) == -1)
        return LRRotation(p);

    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rChild) == -1)
        return RRRotation(p);

    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rChild) == 1)
        return RLRotation(p);

    return p;
}

void preorder(Node *p)
{
    if (p == nullptr)
        return;
    cout << p->data << " ";
    preorder(p->lChild);
    preorder(p->rChild);
}

int main()
{
    root = rInsert(root, 10);
    root = rInsert(root, 5);
    root = rInsert(root, 2);
    Node *cur = root;
    preorder(cur);

    return 0;
}