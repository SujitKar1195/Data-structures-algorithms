#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "HELLO";
    string::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++){
        if(*itr>='A' && *itr<='Z'){
            *itr+=32;
        }
    }
    cout<<s<<endl;



    return 0;
}