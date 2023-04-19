#include <string>
#include <iostream>
using namespace std;

int main()
{
    // string init
    string s;
    string s0 = "welcome";
    string s1("hello sujit");
    char a[] = {'a', 'b', 'c', '\0'};
    string s2(a);
    cout << "s0 : " << s0 << endl;
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;

    // string length
    cout << "Length : " << s2.length() << endl;

    // empty
    if (s.empty())
        cout << "s is an empty string\n";
    else
        cout << "s is not an empty string\n";

    // append
    s.append("I love c++");
    cout << s << endl;

    s += " and python";
    cout << s << endl;

    // clear
    cout << "Before clear: length is -> " << s1.length() << endl;
    s1.clear();
    cout << "After clear : length is -> " << s1.length() << endl;

    // overloaded opertor operators
    string str = "Apple";
    string str1 = "Mango";
    if (str > str1)
        cout << str << " is lexi greater than " << str1 << endl;
    else
        cout << str1 << " is lexi greater than " << str << endl;

    // find
    string n = "I want to have apple juice";
    int index = n.find("apple");
    cout << index << endl;

    //erase
    cout <<"Before erase: "<< n << endl;
    
    string f = "apple";
    int len = f.length();
    n.erase(index,len+1);  //+1 to remove extra space
    cout <<"After erase: "<< n << endl;


    //iterate over string
    string word = "Krishna";
    for(int i=0;i<word.length();i++)
        cout << word[i]<<" ";
    cout << endl;

    
    for(auto it=word.begin();it!=word.end();it++)
        cout <<(*it) <<" ";
    cout << endl;

    for(auto c:word)
        cout << c << " ";
    cout << endl;

    return 0;
}