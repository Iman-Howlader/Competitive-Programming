#include<bits/stdc++.h>
using namespace std;
const int N=1e5+8;
const long long INF=1e18;
vector<pair<int,int>>adj_node[N];

int visited[N],parent[N];
int nodes,edges;
long long dis[N];
void dijistra(int src)
{
    for(int i=1;i<=nodes;i++)
    {
        dis[i]=INF;
    }
    dis[src]=0;
    priority_queue<pair<long long,int>>pq;
    pq.push({0,src});
    while (!pq.empty())
    {
        auto head=pq.top();
        pq.pop();
        int selected_node=head.second;
        if(visited[selected_node]==1)
        {
            continue;
        }
        visited[selected_node]=1;
        for(auto adj_entry: adj_node[selected_node])
        {
            int adj_node=adj_entry.first;
            int adj_cost=adj_entry.second;

            if(dis[selected_node]+adj_cost<dis[adj_node])
            {
                dis[adj_node]=dis[selected_node]+adj_cost;
                parent[adj_node]=selected_node;
                pq.push({-dis[adj_node],adj_node});
                
            }
        }
    }
    
}
int main()
{
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj_node[u].push_back({v,w});
        adj_node[v].push_back({u,w});
    }
    int src=1;
    dijistra(src);

    int current_node=nodes;
    vector<int>path;
    if(visited[nodes]==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    while (current_node!=src)
    {
        path.push_back(current_node);
        current_node=parent[current_node];
    }
    path.push_back(src);
    reverse(path.begin(),path.end());
    for(int x:path)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}