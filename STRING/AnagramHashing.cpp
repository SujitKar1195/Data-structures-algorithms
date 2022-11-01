#include <bits/stdc++.h>
using namespace std;

void Anagram(char a[], char b[])
{
    int i;
    int H[26];
    for (i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97] += 1;
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        H[b[i] - 97] -= 1;
        if (H[b[i] - 97] < 0)
        {
            cout << "String is not anagram\n";
            break;
        }
    }
    if (b[i] == '\0')
        cout << "Given string is anagram\n";
}

int main()
{
    int n;
    cout << "Enter size of the string lowercase = >\n";
    cin >> n;
    char a[n];
    char b[n];
    scanf("%s %s", a, b);
    Anagram(a, b);
    return 0;
}