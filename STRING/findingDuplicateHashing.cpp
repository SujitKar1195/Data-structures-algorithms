#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cout << "Enter string with lowercase alphabet\n";
    cin.getline(s, 100);
    int H[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        H[s[i] - 97] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << (char)(i + 97) << " " << H[i] << " times\n";
        }
    }

    return 0;
}