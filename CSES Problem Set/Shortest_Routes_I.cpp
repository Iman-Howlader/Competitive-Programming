#include<bits/stdc++.h>
#define ll long long 
const ll N=1e5;
const ll inf=9e18;
using namespace std;
vector<pair<ll,ll>>adj[N];
vector<bool>visited[N];

void dijksara(int src,int n)
{
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});

    }
}