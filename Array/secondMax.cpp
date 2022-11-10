/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void ans(int *a, int n)
{
    int count = 1;
    int max, sec;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
    }
    if (count == n)
    {
        cout << "All the elements are same : -1\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {

            if (a[i] < 0)
            {
                max = sec = INT_MIN;
            }
            else
            {
                max = sec = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > sec && a[i] != max)
                sec = a[i];
        }

        cout << "second maximum : " << sec << endl;
    }
}

int main()
{
    int t;
    cout << "Enter test cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter size: ";
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ans(a, n);
    }

    return 0;
}
