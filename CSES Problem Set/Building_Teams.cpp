#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int visited[N] = {};
vector<int> adjList[N];
int color[N];
bool dfs(int node)
{
    visited[node] = 1;
    for (int child : adjList[node])
    {
        if (!visited[child])
        {
            if (color[node])
                color[child] = 0;
            else
                color[child] = 1;
            bool bicolorAble = dfs(child);
            if (!bicolorAble)
            {
                return false;
            }
        }
        else
        {
            if (color[node] == color[child])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bool ok = true;
    for (int i = 1; i <=nodes; i++)
    {
        if (!visited[i])
        {
            ok = dfs(i);
        }
        if (!ok)
        {
            break;
        }
    }
    if (!ok)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        for (int i = 1; i <=nodes; i++)
        {
            cout<<color[i]+1<<" ";
        }
    }
}