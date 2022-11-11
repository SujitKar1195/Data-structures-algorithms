#include <bits/stdc++.h>
using namespace std;

void ans(int *a, int n)
{
    int index = distance(a, max_element(a, a + n));

    cout << "Index of the max element is : " << index << endl;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ans(a, n);

    return 0;
}