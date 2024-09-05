#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define nl "\n"

void solve()
{
    testcase
    {
        int a, b;
        cin >> a >> b;
        bool flag = true;
        char arr[a][b];
        string s="vika";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr[i][j];
            }
        }
        int cnt = 0;
        int x=0;
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (arr[j][i] == s[x])
                {
                    x++;
                    cnt++;
                    break;
                }
            }
        }
        if (cnt==4)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
