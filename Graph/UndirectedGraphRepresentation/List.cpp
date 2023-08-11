#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // List representation of Graph
    int v, e;
    cout << "Enter Vertex and edge number  : ";
    cin >> v;
    cin >> e;
    vector<int> adj[v + 1];
    for (int i = 0; i < e; i++)
    {
        int j, k;
        cout << "Edge Vertices: ";
        cin >> j >> k;
        adj[j].push_back(k);
        adj[k].push_back(j);
    }

    for (int i = 0; i <= v; i++)
    {
        for (auto it : adj[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}