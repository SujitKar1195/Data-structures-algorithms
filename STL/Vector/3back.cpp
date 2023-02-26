/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Vector -> back function
    Time Complexity: O(1)
    Space Complexity: O()
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>&v)
{
     for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    while (v.back() != 0)
    {
        v.push_back(v.back() - 1);
    }

    cout << "Last element is : " << v.back() << endl;
    print(v);
    return 0;
}