#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "programming";
    string s2 = "is fun";
    //s1.erase() it will erase s1 string
    s1.replace(3,4,"kk");
    cout<<s1<<endl; 

    s1.push_back('n');//  can pushback single character not string
    cout<<s1<<endl;

    s1.pop_back();  //pop single character from at the end of the s1 string
    cout<<s1<<endl;

    s1.swap(s2);   //swap s1 string s2
    cout<<s1<<endl;

    /*OUTPUT=>
        prokkming
        prokkmingn
        prokkming
        is fun
    */


    return 0;
}