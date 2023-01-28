#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, string> p;
    // p = make_pair(1, "sujit");
    // cout << p.first << " " << p.second << endl;

    // Pair array//

    // pair<int, int> p[3];
    // p[0] = {1, 2};
    // p[1] = {2, 3};
    // p[2] = {3, 4};

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p[i].first << " " << p[i].second << endl;
    // }

    // pair input

    pair<int, string> P;
    cout << "Enter Pair's first value: ";
    cin >> P.first;
    cout << "Enter Pair's second value: ";
    cin >> P.second;

    cout << P.first << " " << P.second << endl;

    return 0;
}