/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Vector -> string matching brute-force approach
    Time Complexity: O(n*m)
    Space Complexity: O(n+m)
*/

#include <iostream>
#include <string>
using namespace std;

int stringMatching(string s1, string s2)
{
    for (int i = 0; i <= (s1.size() - s2.size()); i++)
    {
        int j = 0;
        while (j < s2.size() && s2[j] == s1[i + j])
        {
            j++;
        }
        if (j == s2.size())
            return i;
    }
    return -1;
}

int main()
{
    int t;
    cout << "Enter test case: ";
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() < s2.size())
        {
            cout << "First string's length should be >= second string's length" << endl;
        }
        else
        {
            int x = stringMatching(s1, s2);
            if (x != -1)
                cout << s2 << " is present in " << s1 << "'s " << x << "th index" << endl;
            else
                cout << "Not present" << endl;
        }
    }

    return 0;
}