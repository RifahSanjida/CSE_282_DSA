//Practice Exercise 1: Write a C++ program to Represent the following graphs using an adjacency matrix.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Number of graph : ";
    cin >> num;
    for(int t=1; t<= num; t++)
    {
        cout << "Graph " << t << " : " << endl;
        int node, edge, v, u;
        cout << "Enter the number of node : ";
        cin >> node;
        cout << "Enter the number of edges : ";
        cin >> edge;
        int matrix[node][node];
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                matrix[i][j] = 0;
            }
        }
        cout << "Enter the node connection : " << endl;
        for (int i = 0; i < edge; i++)
        {
            cin >> u >> v;
            matrix[u][v] = 1;
            matrix[v][u] = 1;
        }
        cout << "Adjacency matrix" << endl;
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}
