#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    string::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++){
        if(*itr>='a' && *itr<='z'){
            *itr-=32;
        }
    }
    cout<<s<<endl;



    return 0;
}