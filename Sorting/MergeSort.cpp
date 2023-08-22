#include <iostream>
#include <vector>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    vector<int> v;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        v.push_back(a[i++]);
    }
    while (j <= high)
    {
        v.push_back(a[j++]);
    }

    for (int k = low; k <= high; k++)
    {
        a[k] = v[k - low];
    }
}

void mergeSort(int a[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    merge(a, low, mid, high);
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // creation of array
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    for (int i : a)
        cout << i << " ";
    cout << endl;

    return 0;
}