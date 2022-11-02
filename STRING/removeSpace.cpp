#include <bits/stdc++.h>
using namespace std;

void rem(char *s)
{
    int i = 0, j = 0;
    while (s[i])
    {
        if (s[i] != ' ')
        {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
    printf("%s", s);
}

int main()
{
    char s[100];
    cin.getline(s, 100);
    rem(s);
    return 0;
}