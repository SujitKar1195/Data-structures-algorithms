#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"sujit"));
    m.insert(pair<int,string>(2,"sujan"));
    m.insert(pair<int,string>(3,"sayan"));
    map<int,string>::iterator i;
    cout<<"Map : key and value pair\n";
    for(i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }

    cout<<"After findfing value\n";
    //for that we need another iterator
    map<int,string>:: iterator find;
    find = m.find(2);
    cout<<find->first<<" "<<find->second<<endl;

    /* output/
    Map : key and value pair
    1 sujit
    2 sujan
    3 sayan
    After findfing value
    2 sujan
    */
}
