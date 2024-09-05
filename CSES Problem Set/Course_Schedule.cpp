#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
vector<int>adjList[N];
int visited[N]={};
stack<int>st;
void dfs(int node)
{
    visited[node]=1;
    for(auto adjnode: adjList[node])
    {
        if(!visited[adjnode])
        {
            dfs(adjnode);
        }
    }
    st.push(node);
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
    for(int i=1;i<=nodes;i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}