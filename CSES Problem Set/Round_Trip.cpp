#include<bits/stdc++.h>
using namespace std;
const int N=1e6;

int visited[N]={};
vector<int>adjList[N];
bool dfs(int node)
{
    visited[node]=1;
    for(int adjnode:adjList[node])
    {
        if(!visited[adjnode])
        {
            dfs(adjnode);
        }
    }
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
    }
    for(int i=1;i<=nodes;i++)
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }
}