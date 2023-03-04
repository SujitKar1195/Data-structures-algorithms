#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, int>::iterator it;
    // map<string, int> marks;
    // marks["math"] = 98;
    // marks["geo"] = 99;
    // marks["physics"] = 95;

    // for (it = marks.begin(); it != marks.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // // insert function

    // marks.insert({{"his", 90}, {"politics", 67}});
    // cout << "After inserting value with insert function : " << endl;
    // for (it = marks.begin(); it != marks.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // // find function
    // cout << "Using find function : " << endl;
    // it = marks.find("geo");
    // cout << (*it).first << " " << (*it).second << endl;

    // // erase function
    // marks.erase(it);
    // cout << "After using erase function on geo key : \n";
    // for (it = marks.begin(); it != marks.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // cout <<"After using erase on politics: \n";
    // marks.erase("politics");
    // for (it = marks.begin(); it != marks.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // Checking that it uses sort technique or not

    // map<string,int> m;
    // m["c"] = 3;
    // m["b"] = 2;
    // m["a"] = 1;
    // cout <<"After inserting value ,size is : "<<m.size() << endl;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // m.clear();
    // cout <<"After using clear() : size is : " <<m.size() << endl;

    // count function

    // map<char, int> ch;
    // ch.insert({{'a', 1}, {'b', 3}, {'c', 3}});

    // cout << "Size : " << ch.size() << endl;

    // char character;
    // for (character = 'a'; character <= 'g'; character++)
    // {
    //     cout << character;
    //     if (ch.count(character) > 0)
    //         cout << " is present in the map" << endl;
    //     else
    //         cout << " is not present in the map" << endl;
    // }
    // map<string, int> m;
    // m["c"] = 3;
    // m["b"] = 2;
    // m["a"] = 1;
    // m["a"] = 3;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    return 0;
}