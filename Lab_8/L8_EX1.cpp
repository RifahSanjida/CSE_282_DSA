//Example 1: Finding the shortest distance from the source to all the nodes.
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int dis[100],visited[100];
void Bfs(int source)
{
    queue<int>q;
    dis[source]=0;
    visited[source]=1;
    q.push(source);
    while(!q.empty())
    {
        int node = q.front();
        for(auto it:adj[node])
        {
            int nxt_node = it;
            if (visited[nxt_node])
                continue;
            dis[nxt_node] = 1 + dis[node];
            visited[nxt_node] = 1;
            q.push(nxt_node);
        }
        q.pop();
    }
}
int main()
{
    int i,j,k;
    int n,m;
    cout<< "No.of Nodes: "<<endl;
    cin >> n;
    cout<< "No.of Edges: "<<endl;
    cin >> m;
    cout<<"Enter the edge connections: "<<endl;
    for (i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source;
    cout<<"Enter the Source Node: "<<endl;
    cin >> source;
    Bfs(source);
    for (i = 1; i <= n; ++i)
    {
        cout << "Distance " << source << " to " << i << " = " << dis[i]<< endl;
    }

}
