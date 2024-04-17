//Practice Exercise 3:Write a C++ program to find the traversal of the following graphs (Figure 1).
#include <bits/stdc++.h>
using namespace std;

vector<int> BFS(int source, vector<int> graph[])
{
    vector<int> vec;
    queue<int> q;
    int visited[10] = {0};
    visited[source] = 1;
    q.push(source);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        vec.push_back(node);
        for (int i : graph[node])
        {
            if (visited[i])
                continue;
            q.push(i);
            visited[i] = 1;
        }
    }
    return vec;
}

int main()
{
    int num;
    cout << "Number of graph : ";
    cin >> num;
    for (int t = 1; t <= num; t++)
    {
        cout << "Graph " << t << " : " << endl;
        int node, edge, v, u, source;
        cout << "Enter the number of node : ";
        cin >> node;
        cout << "Enter the number of edges : ";
        cin >> edge;
        cout << "Enter the node connection : " << endl;
        vector<int> graph[node];
        for (int i = 0; i < edge; i++)
        {
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        cout << "Enter the source node : ";
        cin >> source;
        vector<int> bfs = BFS(source, graph);
        cout << "Graph elements : ";
        for (auto it : bfs)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
