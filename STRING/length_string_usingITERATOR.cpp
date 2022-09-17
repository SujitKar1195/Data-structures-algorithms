#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s= "hello";
    int count=0;
    string::iterator i;
    for(i=s.begin();i!=s.end();i++){
        count++;
    }
    cout<<count<<endl;
    cout<<s.length();
    
   
    
    
    return 0;
}
