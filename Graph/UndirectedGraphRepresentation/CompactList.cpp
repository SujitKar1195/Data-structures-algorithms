#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Compact list representation of Graph
    int v, e;
    cout << "Enter vertex and Edges: ";
    cin >> v >> e;
    int size = v + (2 * e) + 1 + 1; // 1 base indexing
    int a[size] = {0};

    return 0;
}