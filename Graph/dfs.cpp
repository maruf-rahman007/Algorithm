#include<bits/stdc++.h>

using namespace std;

int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<int> adj[node+1];
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int visited[node+1];
    for(int i=0;i<=node;i++)
    {
        visited[i]=0;
    }

    stack<int> s;
    s.push(1);
    visited[1]=1;
    while(!s.empty())
    {
        int u=s.top();
        s.pop();
        cout<<u<<" ";
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                s.push(v);
            }
        }
    }

    return 0;
}