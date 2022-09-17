#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s= "hello";
    string::iterator itr;
    string::reverse_iterator ritr;
    for(itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    for(ritr=s.rbegin();ritr!=s.rend();ritr++){
        cout<<*ritr<<" ";
    }
    cout<<endl;
    
   
    
    
    return 0;
}
