#include <iostream>
using namespace std;

int main()
{

    // Adjacency matrix Representation
    int v, e;
    cout << "Enter vertex: ";
    cin >> v;
    cout << "Enter Edges: ";
    cin >> e;

    // creating a matrix
    int graph[v + 1][v + 1] = {0};
    for (int i = 0; i < e; i++)
    {
        int j, k;
        cin >> j >> k;
        graph[j][k] = 1;
        graph[k][j] = 1;
    }

    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}