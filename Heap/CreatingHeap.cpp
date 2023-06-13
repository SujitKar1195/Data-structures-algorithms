/*
There are two types of Heap.
1. Max Heap: here current node will be of greater value than it's descendents
2. Min Heap: here current node will be of lesser value than  it's descendents

In heap, we don't use Zeroth index.
Indexing will start from 1 onward;
*/

// In this section we will use Max Heap.

#include <iostream>
using namespace std;

void insert(int *a, int n)
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

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int a[n + 1]; // creating array
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 2; i <= n; i++)
    {
        insert(a, i);
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}