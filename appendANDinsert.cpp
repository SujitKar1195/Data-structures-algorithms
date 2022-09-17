#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="hi";
    s.append(" welcome"); //append()  append string at the end of ths previous string value.

    cout<<s<<endl; //hi welcome

    s.insert(10," kk");
    cout<<s<<endl; // hi welcome kk

    



    return 0;
}