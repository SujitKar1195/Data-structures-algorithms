#include <iostream>
#include <map>
#include <list>
using namespace std;

class Graph
{
public:
    map<int, list<int>> adj;
    void addEdges(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        // direction = 0 -> undirected
        // direction = 1 -> directed
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdj()
    {
        for (const auto &i : adj)
        {
            cout << i.first << " -> ";
            for (int j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << " Enter no of nodes: " << endl;
    cin >> n;

    int m;
    cout << " Enter no of edges: " << endl;
    cin >> m;

    Graph g;
    for (int i = 0; i < m; i++)
    {
        int u;
        int v;
        cin >> u;
        cin >> v;
        g.addEdges(u, v, 0);
    }
    g.printAdj();

    return 0;
}