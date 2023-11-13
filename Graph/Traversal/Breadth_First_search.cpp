#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &graph, int size)
{
    queue<int> q;
    vector<int> ans;
    int vis[size] = {0};
    ans.push_back(0);
    q.push(0);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : graph[u])
        {
            if (vis[v] == 0)
            {
                ans.push_back(v);
                vis[v] = 1;
                q.push(v);
            }
        }
    }

    return ans;
}

int main()
{
    int v;
    cout << "Enter No.of vertices: ";
    cin >> v;

    vector<vector<int>> graph;
    for (int i = 0; i < v; i++)
    {
        vector<int> adjacentVertices;
        int adjv;
        cout << "No of Adjacent (" << i << ") : ";
        cin >> adjv;
        cout << endl;
        if (adjv != 0)
            cout << "Enter adjacent (" << i << ") : ";
        for (int j = 0; j < adjv; j++)
        {
            int x;
            cin >> x;
            adjacentVertices.push_back(x);
        }
        graph.push_back(adjacentVertices);
        cout << endl;
    }

    vector<int> ans = bfs(graph, v);

    for (int i : ans)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}