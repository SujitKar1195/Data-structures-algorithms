#include <stack>
#include <iostream>
using namespace std;

int priority(char x)
{
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}
void infix_postfix(string exp)
{
    stack<char> st;
    int i = 0;
    while (exp[i] != '\0')
    {
        if (isalnum(exp[i]))
        {
            cout << exp[i];
            i++;
        }
        else
        {
            if (st.empty())
                st.push(exp[i++]);
            else
            {
                if (priority(exp[i]) > priority(st.top()))
                    st.push(exp[i++]);
                else
                {
                    cout << st.top();
                    st.pop();
                }
            }
        }
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}

int main()
{
    string exp;
    exp.reserve(100);
    getline(cin, exp);

    infix_postfix(exp);

    return 0;
}