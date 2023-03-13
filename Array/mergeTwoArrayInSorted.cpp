#include <iostream>
using namespace std;

void mergeArray(int *a, int *b, int n, int m)
{
    int newArray[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            newArray[k++] = a[i++];
        }
        else if (b[j] < a[i])
        {
            newArray[k++] = b[j++];
        }
    }

    while (i < n)
    {
        newArray[k++] = a[i++];
    }
    while (j < m)
    {
        newArray[k++] = b[j++];
    }

    for (int i = 0; i < n + m; i++)
        cout << newArray[i] << " ";
    cout << endl;
}

int main()
{
    int n, m;
    cout << "Enter 1st array size: ";
    cin >> n;
    cout << "Enter 2st array size: ";
    cin >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    mergeArray(a, b, n, m);

    return 0;
}