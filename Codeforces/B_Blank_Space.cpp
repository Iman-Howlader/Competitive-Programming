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
    int n;
    testcase
    {
        cin >> n;
        int cnt = 0;
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt++;
                if (max <= cnt)
                    max = cnt;
            }
            else
            {
                cnt = 0;
            }
        }
        cout << max << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
