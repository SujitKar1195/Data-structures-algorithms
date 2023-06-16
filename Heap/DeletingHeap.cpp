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

int Delete(int a[], int n)
{
    int i, j, temp, val, x;
    val = a[1];
    x = a[n];
    a[1] = x;
    i = 1, j = 2 * i;
    while (j < n - 1)
    {
        if (a[j + 1] > a[j])
            j = j + 1;
        if (a[i] < a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i = j;
            j = 2 * j;
        }
        else
            break;
    }
    a[n] = val;
    return val;
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int a[n + 1]; // creating an array
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 2; i <= n; i++)
    {
        insert(a, i); // Heap creation
    }

    // Deleting must be from the root element
    cout << "Deleted element is : " << Delete(a, n) << endl;

    cout << "Heap elements: ";
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}