#include <bits/stdc++.h>
using namespace std;

int match(char a, char b)
{
    if (a == '(' && b == ')')
        return 1;

    if (a == '{' && b == '}')
        return 1;

    if (a == '[' && b == ']')
        return 1;
    return 0;
}

int checkExpression(char s[])
{
    stack<char> st;
    char temp;

    for (int i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty())
            {
                cout << "Right symbol are more than left symbol\n";
                return 0;
            }
            temp = st.top();
            st.pop();
            if (!match(temp, s[i]))
            {
                cout << "Invalid balancing\n";
                return 0;
            }
        }
    }
    if (st.empty())
    {
        return 1;
    }
    return 0;
}

int main()
{

    char s[100];
    cout << "Enter a string\n";
    cin.getline(s, 100);
    int validity;
    validity = checkExpression(s);
    if (validity == 1)
    {
        cout << "Valid Expression\n";
    }
    else
    {
        cout << "Invalid Expression\n";
    }

    return 0;
}