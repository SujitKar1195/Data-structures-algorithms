/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Vector -> begin() and end()
    Time Complexity: O(1)
    Space Complexity: O()
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 5; i++)
        v.push_back(i);

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}