#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string r;
    cout << "Enter string ";
    getline(cin, s);
    string::reverse_iterator i;
    int x = 0;
    for (i = s.rbegin(); i != s.rend(); i++)
    {
        r += *i;
    }

    if (r == s)
    {
        cout << "palindrome string" << endl;
    }
    else
    {
        cout << "Not palindrome string" << endl;
    }

    return 0;
}