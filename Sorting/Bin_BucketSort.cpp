/*

<---------------------------------------- Bin/Bucket Sort ------------------------------------->
This sorting technique is like the count sort. But here it uses linked list.
Algorithm:

    1. Find the max value from the array.
    2. Create a new array(Linked list) with the size of max value + 1;
    3. Initialize the new array with the value NULL.
    4. Iterate the array which we want to sort and add the element at the particular index of the new array..
    5. Then iterate the new array and copy numbers to the actual array and delete the node from the array.

Analysis:
    Time Complexity: O(n);
    Space Complexity: O(*max_element(arr)) => O(n);
    *max_element(arr) => The Maximum element of the array.

Let's see the code:

 */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insert(Node **ptrBins, int idx)
{
    Node *temp = new Node(idx);
    if (ptrBins[idx] == nullptr)
    { // ptrBins[idx] is head ptr
        ptrBins[idx] = temp;
    }
    else
    {
        Node *p = ptrBins[idx];
        while (p->next != nullptr)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

int Delete(Node **ptrBins, int idx)
{
    Node *p = ptrBins[idx]; // ptrBins[idx] is head ptr
    ptrBins[idx] = ptrBins[idx]->next;
    int x = p->data;
    delete p;
    return x;
}

void bin_bucket_Sort(vector<int> &a, int size)
{
    int maxValue = *max_element(a.begin(), a.end()); // finding the maximum value
    int n = maxValue + 1;
    Node **bin = new Node *[n];
    for (int i = 0; i < n; i++)
    {
        bin[i] = nullptr;
    }

    for (int i = 0; i < size; i++)
    {
        insert(bin, a[i]);
    }

    int i = 0, j = 0;

    while (i < n)
    {
        while (bin[i] != nullptr)
        {
            a[j++] = Delete(bin, i);
        }
        i++;
    }
    delete[] bin;
}

int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    bin_bucket_Sort(arr, n);

    cout << "<---- After sorting ----->" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}