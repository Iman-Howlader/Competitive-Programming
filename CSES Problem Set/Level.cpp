#include<bits/stdc++.h>
using namespace std;
const int N=1010;
vector<int>adjList[N];
int visited[N]={};
int level[N]={};
void bfs(int node)
{
    queue<int>q;
    q.push(node);
    visited[node]=1;
    level[node]=0;
    while (!q.empty())
    {
        int head=q.front();
        q.pop();
        for(auto adjnode:adjList[head])
        {
            if(!visited[adjnode])
            {
                q.push(adjnode);
                visited[adjnode]=1;
                level[adjnode]=level[head]+1;
            }
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
        adjList[v].push_back(u);

    }
    int src=0;
    bfs(src);
    for (int  i = 0; i <nodes; i++)
    {
        cout<<"Level of "<<i<<"= "<<level[i]<<endl;
    }
    
}