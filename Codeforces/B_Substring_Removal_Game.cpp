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
        string s;
        int cnt = 0, n, ans = 0;

        cin >> s;
        vector<int> a;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
            else
            {
                if (cnt > 0)
                    a.push_back(cnt);
                cnt = 0;
            }
        }
        if (cnt > 0)
            a.push_back(cnt);
        sort(a.begin(), a.end(), greater<int>());
        for (int i = 0; i < a.size(); i += 2)
        {
            ans += a[i];
        }
        cout << ans << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
