#include <iostream>
#include <algorithm>
using namespace std;

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

bool compare(int a,int b)
{
    return a>b;
}

int main()
{
    int a[100];
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n); // sorting in ascending order
    display(a, n);

    // sorting in descending order
    // for that we need a comparator function
    sort(a,a+n,compare);
    display(a,n);

    // another in-built technique is
    sort(a,a+n,greater<>());
    display(a,n);

    return 0;
}