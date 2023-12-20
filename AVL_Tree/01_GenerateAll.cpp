// LL-Rotation
// LR-Rotation
// RR-Rotation
// RL-Rotation

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

/*Height of Each Node*/
int NodeHeight(Node *p)
{
    int hl, hr;
    hl = p && p->lChild ? p->lChild->height : 0;
    hr = p && p->rChild ? p->rChild->height : 0;

    return 1 + max(hl, hr);
}

/*Balance Factor*/
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
    
        // Update height
        p->height = NodeHeight(p);
        pl->height = NodeHeight(pl);

        return pl;
    }

/*lChild rChild Rotation*/
    Node *LRRotation(Node *p)
    {
    
        Node *pl = p->lChild;
        Node *plr = pl->rChild;
    
        pl->rChild = plr->lChild;
        p->lChild = plr->rChild;
    
        plr->lChild = pl;
        plr->rChild = p;
    
        // Update height
        pl->height = NodeHeight(pl);
        p->height = NodeHeight(p);
        plr->height = NodeHeight(plr);
    
        
        return plr;
    }

/*rChild rChild Rotation*/
    Node *RRRotation(Node *p)
    {
        Node *pr = p->rChild;
        Node *prl = pr->lChild;
    
        pr->lChild = p;
        p->rChild = prl;
    
        // Update height
        p->height = NodeHeight(p);
        pr->height = NodeHeight(pr);
    
        
        return pr;
    }
    
    /*rChild lChild Rotation*/
    Node *RLRotation(Node *p)
    {
        Node *pr = p->rChild;
        Node *prl = pr->lChild;
    
        pr->lChild = prl->rChild;
        p->rChild = prl->lChild;
    
        prl->rChild = pr;
        prl->lChild = p;
    
        // Update height
        pr->height = NodeHeight(pr);
        p->height = NodeHeight(p);
        prl->height = NodeHeight(prl);
    
    
        return prl;
    }

/*Recursive Insertion In AVL Tree*/
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

// PreOrder traversal
void preorder(Node *p)
{
    if (p == nullptr)
        return;
    cout << p->data << " ";
    preorder(p->lChild);
    preorder(p->rChild);
}

// Main function
int main()
{
    root = rInsert(root, 10);
    root = rInsert(root, 20);
    root = rInsert(root, 30);
    root = rInsert(root, 25);
    root = rInsert(root, 28);
    root = rInsert(root, 27);
    root = rInsert(root, 5);
    Node *cur = root;
    preorder(cur);

    return 0;
}