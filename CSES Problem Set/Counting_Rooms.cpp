#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1010;
int maze[N][N]={};
int visited[N][N]={};
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
void dfs(pair<int,int>node)
{
    visited[node.first][node.second]=1;
    for(int i=0;i<4;i++)
    {
        int x=node.first+dx[i];
        int y=node.second+dy[i];
        if(!visited[x][y] && x>=0 && x<n && y<m && y>=0 && maze[x][y]!=-1)
        {
            pair<int,int>adj_node={x,y};
            dfs(adj_node);
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='#')
            {
                maze[i][j]=-1;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            pair<int,int>src={i,j};
            if(!visited[i][j] && maze[i][j]!=-1)
            {
                dfs(src);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;


}