#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int visited[N][N];
pair<int, int> parent[N][N];
char maze[N][N];
int n, m;
int dx_[] = {1, -1, 0, 0};
int dy_[] = {0, 0, 1, -1};
char direct[] = {'D', 'U', 'R', 'L'};

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = 1;
    parent[src.first][src.second]={-1,-1};
    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int new_x = head.first + dx_[i];
            int new_y = head.second + dy_[i];
            if (visited[new_x][new_y] == 0 && maze[new_x][new_y] != '#' && new_x >= 0 && new_x < n && new_y >= 0 && new_y < m)
            {
                visited[new_x][new_y] = 1;
                q.push({new_x, new_y});
                parent[new_x][new_y]=head;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    pair<int, int> start, end;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
            if (maze[i][j] == 'A')
            {
                start.first = i;
                start.second = j;
            }
            if (maze[i][j] == 'B')
            {
                end.first = i;
                end.second = j;
            }
        }
    }
    
    bfs(start);
    if (visited[end.first][end.second])
    {
        cout << "YES" << endl;

        vector<pair<int, int>> path;
        path.push_back({end.first, end.second});
        int x = end.first;
        int y = end.second;
        while (parent[x][y] != make_pair(-1, -1))
        {
            auto p=parent[x][y];
            x = p.first;
            y = p.second;
            path.push_back({x, y});
        }
        reverse(path.begin(), path.end());
        string ans;
        for (int i = 0; i < path.size() - 1; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int p, q;
                p = path[i].first + dx_[j];
                q = path[i].second + dy_[j];
                if (p == path[i + 1].first && q == path[i + 1].second)
                {
                    ans.push_back(direct[j]);
                    break;
                }
            }
        }
        cout << ans.size() << endl;
        cout << ans << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}