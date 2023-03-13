/*
    Author: Sujit Kar
    Date: 13/03/2023
    Topic: Merge two arrays without creating a new array
    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter 1st and 2nd array size: ";
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    

    




    return 0;
}