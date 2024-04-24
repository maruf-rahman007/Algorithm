#include<bits/stdc++.h>

using namespace std;

int main()
{
    int node,edge;
    cin>>node>>edge;
    int matrix[node+1][node+1];
    for(int i=0;i<=node;i++)
    {
        for(int j=0;j<=node;j++)
        {
            matrix[i][j]=0;
        }
    }
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        matrix[u][v]=1;
        matrix[v][u]=1;
    }
    
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

