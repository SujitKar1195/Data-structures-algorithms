#include <iostream>
#include <vector>
#include <algorithm> // to use in-built algo functions
using namespace std;

int main()
{
    vector<int> v = {1, 6, 3, 68, 2, 100};
    int n = v.size();
    int key;
    cout << "Enter a key: ";
    cin >> key;
    auto it = find(v.begin(), v.end(), key);
    int index = it - v.begin(); // to find the index using first address
    if (index != n)
        cout << key << " is present at index: " << index << endl;
    else
        cout << key << " is not present\n";

    return 0;
}