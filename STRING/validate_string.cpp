#include <bits/stdc++.h>
using namespace std;

int valid(char a[])
{
    int x = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        {
            x = 1;
        }

        else
        {
            x = 0;
            break;
        }
    }
    return x;
}

int main()
{

    char a[100];
    cout << "Enter string : " << endl;
    cin.getline(a, 100);
    if (valid(a) == 1)
    {
        cout << "valid\n";
    }
    else
    {
        cout << "not valid" << endl;
    }

    return 0;
}