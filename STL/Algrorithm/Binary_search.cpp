#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int n = v.size();
    int key;
    cout << "enter the key: ";
    cin >> key;
    bool present = binary_search(v.begin(), v.end(), key);
    if (present)
        cout << "present\n";
    else
        cout << "not present\n";

    return 0;
}