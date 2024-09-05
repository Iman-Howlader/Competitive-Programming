#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj_list[N];
int visited[N]={},level[N];
int parent[N];
void bfs(int node)
{
    visited[node]=1;
    level[node]=1;
    parent[node]=-1;
    queue<int>q;
    q.push(node);
    while (!q.empty())
    {
        int head=q.front();
        q.pop();
        for(int adjnode:adj_list[head])
        {
            if(!visited[adjnode])
            {
                parent[adjnode]=head;
                q.push(adjnode);
                visited[adjnode]=1;
                level[adjnode]=level[head]+1;
            }
        }
        
    }
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src_node=1;
    bfs(src_node);
    int dest_node=n;
    if(!visited[dest_node])
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    cout<<level[dest_node]<<endl;

    vector<int>a;
    int selected=dest_node;
    while (true)
    {
        a.push_back(selected);
        if(selected==src_node)
        {
            break;
        }
        selected=parent[selected];
    }
    reverse(a.begin(),a.end());
    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
}