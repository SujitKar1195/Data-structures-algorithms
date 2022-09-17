#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s); //if enter "welcome"
    /* inbuilt function=> try yourself
    1)s.length()
    2)s.size()
    3)s.capacity()
    4)s.resize(30)
    5)s.max_size()
    6)s.clear()
    7)s.empty()
    */
    cout<<s.length()<<endl; //7
    cout<<s.size()<<endl; //7
    cout<<s.capacity()<<endl; //15
    s.resize(30); 
    cout<<s.capacity()<<endl; //30
    
    cout<<s.max_size()<<endl; //1073741823
    
    cout<<s.empty()<<endl; //it gives 0 or 1 .if string is empty->return 0 and vice versa.
    s.clear();   //it will clear whole string
    cout<<s<<endl;



    return 0;
}