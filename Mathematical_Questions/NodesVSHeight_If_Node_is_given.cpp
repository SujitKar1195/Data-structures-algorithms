/*
    Author: Sujit Kar
    Date: 11/03/2023
    Topic: if node is given ,then calculate height of a tree
    Time Complexity: O(1)
    Space Complexity: O()
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cout << "Enter test cases : ";
    cin >> t;

    while (t--)
    {
        int node;
        cout << "Enter Nodes: ";
        cin >> node;

        cout << "Min height would be : " <<(int)(log2(node+1) - 1) <<endl;
        cout << "Max height would be : " << node -1 <<endl;
        
    }

    return 0;
}