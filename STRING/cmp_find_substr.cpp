#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s= "hello";
    string str = "helloo";
    cout<<s.find('e');
    cout<<endl;
    cout<<s.find_first_of('e')<<endl;
    cout<<s.find_last_of('l',2)<<endl;
    cout<<s.substr(1,4)<<endl;
    cout<<s.compare(str);
    
    
    return 0;
}