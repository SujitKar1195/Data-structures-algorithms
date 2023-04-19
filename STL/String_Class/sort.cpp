#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

bool comp(string s, string b)
{
    if (s.length() == b.length())
        return s < b;
    return s.length() > b.length();
}

int main()
{
    int n;
    cout << "Enter string array size: ";
    cin >> n;
    cin.get();
    string s[100];
    for (int i = 0; i < n; i++)
        getline(cin, s[i]);
    // sorting lexicographically
    sort(s, s + n);

    cout << "After sorting: \n";

    for (int i = 0; i < n; i++)
        cout << s[i] << "\n";

    // sorting based on lexi and length
    cout << "After lexi and length base sorting: " << endl;

    sort(s, s + n, comp);
    for (int i = 0; i < n; i++)
        cout << s[i] << "\n";

    return 0;
}