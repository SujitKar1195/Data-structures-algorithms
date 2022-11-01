#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    cout << "Enter string\n";
    cin.getline(a, 100);
    long h = 0, x = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        x = 1;
        x = x << (a[i] - 97);
        if ((x & h) > 0)
        {
            cout << a[i] << " is duplicate\n";
        }
        else
        {
            h = (x | h);
        }
    }

    return 0;
}