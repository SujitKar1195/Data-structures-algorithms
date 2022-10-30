// Using sort function
// time complexity->O(n*logn):due to sort function

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter string \n";
    getline(cin, s);

    sort(s.begin(), s.end());
    int x = 1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1] && s[i] != ' ')
        {
            x = 0;
            break;
        }
    }
    if (x)
    {
        cout << "No Duplicate\n";
    }
    else
    {
        cout << "Duplicate\n";
    }

    return 0;
}