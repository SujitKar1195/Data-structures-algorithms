/*
There are two types of Heap.
1. Max Heap: here current node value will be of greater value than it's descendents
2. Min Heap: here current node will be of lesser value than  it's descendents

In heap, we don't use Zeroth index.
Indexing  starts from 1 onward;
*/

// In this section we will use Max Heap.

#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &a, int n)
{
    int temp = a[n];
    int i = n;
    while (i > 1 && temp > a[i / 2]) // use '<' symbol  instead of '>' for Min Heap
    {
        a[i] = a[i / 2];
        i = i / 2;
    }

    a[i] = temp;
}

int Parent(vector<int> &a, int index, int n)
{

    if (index <= 1 || index > n)
    {
        return -1;
    }
    return index / 2;
}

int leftChild(vector<int> &a, int index, int n)
{
    if (index <= 0 || index >= (n - 1))
        return -1;
    return 2 * index;
}
int rightChild(vector<int> &a, int index, int n)
{
    if (index <= 0 || index >= (n - 1))
        return -1;
    return 2 * index + 1;
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    vector<int> a(n + 1); // creating array
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        insert(a, i); // Heap creation
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    /*
    // Find parent of current node = i/2;
    int index;
    cout << "Enter index for searching parent: ";
    cin >> index;

    int i = Parent(a, index, n); // parent node index

    if (i == -1)
        cout << "Invalid Index\n";
    else
        cout << "Parent Node is : " << a[i] << endl;

    //

    // Left child = 2 * i;
    cout << "Enter Index to find LeftChild:\n";
    cin >> index;
    i = leftChild(a, index, n);
    if (i == -1)
        cout << "Invalid index\n";
    else
        cout << "Left Child is : " << a[i] << endl;

    //
    // Right child = 2*i + 1;
    cout << "Enter Index to find rightChild:\n";
    cin >> index;
    i = rightChild(a, index, n);
    if (i == -1)
        cout << "Invalid index\n";
    else
        cout << "Right Child is : " << a[i] << endl;
    //
    cout << "Heap elements: ";
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
    */

    return 0;
}