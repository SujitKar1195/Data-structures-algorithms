#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cout << "Enter size of the queue : ";
    cin >> n;
    system("cls");

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter " << i + 1 << " element : ";
        cin >> x;
        q.push(x);
    }
    system("cls");

        for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " element is : " << q.front() << "\n";
        q.pop();
    }

    return 0;
}