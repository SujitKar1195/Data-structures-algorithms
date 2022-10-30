#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "radha";
    string str = "KRISHNA";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;

    return 0;
}