#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    pair<int, int> p = make_pair(a, b);
    cout << p.first << " " << p.second << endl;

    pair<pair<int,char>,string> man;
    man.first.first = 2111981195;
    man.first.second = 'B';
    man.second = "Sujit Kar";
    cout << man.first.first <<" "<<man.first.second<<" "<<man.second<<endl;

    return 0;
}