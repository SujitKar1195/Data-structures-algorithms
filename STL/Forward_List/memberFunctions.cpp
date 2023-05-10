#include <iostream>
#include <forward_list>
using namespace std;

void display(forward_list<int> &list)
{
    for (int &x : list)
        cout << x << " ";
    cout << endl;
}

int main()
{
    forward_list<int> first;
    forward_list<int> second;
    // assign
    first.assign(5, 1); // 1 1 1 1 1
    display(first);

    second.assign(first.begin(), first.end());
    display(second); // 1 1 1 1 1
    // insert_after

    auto it = first.insert_after(first.begin(), 99); // 1 99 1 1 1 1

    display(first);

    // if we want to insert before begin of the list
    first.insert_after(first.before_begin(), 78); // 78 1 99 1 1 1 1
    display(first);
    // output
    /*
    1 1 1 1 1
    1 1 1 1 1
    1 99 1 1 1 1
    78 1 99 1 1 1 1
    */

    // clear
    first.clear();
    display(first);

    return 0;
}