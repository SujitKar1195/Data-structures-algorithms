#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter string 1 value\n";
    getline(cin,str1);
    cout<<"Enter string 2 value\n";
    getline(cin,str2);

    //concatenate
    string result = str1+str2;
    cout<<result<<endl;

    //copy
    string res;
    res = result;
    cout<<res<<endl;




    return 0;
}