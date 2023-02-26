/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Vector -> Capacity()
    Time Complexity: O(1)
    Space Complexity: O()
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=0;i<10;i++)
        v.push_back(i + 1);
    
    cout << "size : " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;
    cout << "max_size : " << v.max_size() << endl;


    return 0;
}