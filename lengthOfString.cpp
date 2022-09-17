#include <bits/stdc++.h>    //"bits/stdc++.h" header file includes all header file.We no need add required header files
using namespace std;

int main()
{
    string str;
    getline(cin,str);   //Always try to take input like this for string.
    cout<<str<<endl;
    
    //Length of this string
    //You can use both of this in-built function=> length() & size() for string.
    cout<<str.length()<<endl;
    cout<<str.size();


    return 0;
}