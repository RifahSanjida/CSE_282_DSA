//Example 1: Graph Representation using Adjacency List.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>graph[5];
    int nodes,edge, u, v;
    cout<<"Enter Number of Nodes: ";
    cin>>nodes;
    cout<<"Enter Number of Edges: ";
    cin>>edge;
    for(int i = 0;i < edge;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout<<"Adjacency List of the Graph: "<<endl;
    for(int j = 0; j < nodes; j++)
    {
        cout<<j<<" --> ";
        for(auto it: graph[j])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
