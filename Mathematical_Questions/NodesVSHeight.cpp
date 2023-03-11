/*
    Author: Sujit Kar
    Date: 26/02/2023
    Topic: Number of Nodes With Respect to Heights
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
        int height;
        cout << "Enter Height : " << endl;
        cin >> height;
        cout << "Minimum Nodes would be : " << height + 1 << endl;
        cout << "Maximum Nodes would be : " << pow(2, height + 1) - 1 << endl;
    }

    return 0;
}