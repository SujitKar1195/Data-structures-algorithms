#include <bits/stdc++.h>
using namespace std;
vector<string> returnWithUsingNoArgumentAnsVector(string tem, string s)
{
    if (s.empty())
    {
        return {tem};
    }

    vector<string> ans1 = returnWithUsingNoArgumentAnsVector(tem + s[0], s.substr(1));
    vector<string> ans2 = returnWithUsingNoArgumentAnsVector(tem, s.substr(1));
    vector<string> ans;
    for (string &s : ans1)
        ans.push_back(s);
    for (string &s : ans2)
        ans.push_back(s);

    return ans;
}

void printAllSubsets(string s, string temp)
{

    if (s.empty())
    {
        if (temp.size() > 0)
            cout << temp << endl;
        return;
    }
    printAllSubsets(s.substr(1), temp + s[0]);
    printAllSubsets(s.substr(1), temp);
}
int main()
{
    string s = "abc";
    // vector<string> ans = returnWithUsingNoArgumentAnsVector("", s);
    // for (string &s1 : ans)
    //     cout << s1 << endl;
    // s = "abc";
    printAllSubsets(s, "");

    return 0;
}