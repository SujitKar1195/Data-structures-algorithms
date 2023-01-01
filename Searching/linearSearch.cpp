/*welcome to Linear search Array*/
/*Time complexity taken by this algorithm is => O(1)-O(n)*/
#include <bits/stdc++.h>
using namespace std;

void linearSearch(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == a[i])
        {
            cout << key << " is present at index " << i << endl;
            return;
        }
    }
    cout << "Not present\n";
}

int main()
{
    int n; // size of an array
    cout << "Enter the size of an array : ";
    cin >> n;
    int A[n]; // Array declaration
    cout << "Take array inputs : ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int key;
    cout << "enter key element : "; // which number you want to search
    cin >> key;
    linearSearch(A, n, key);

    return 0;
}