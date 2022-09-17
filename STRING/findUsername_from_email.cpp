#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "google123@gmail.com";
    int x= s.find('@');
    cout<<s.substr(0,x)<<endl;
    return 0;
}