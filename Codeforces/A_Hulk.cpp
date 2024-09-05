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
    string s = "I hate", s2 = "I love", s3 = "that";
    string ans = "";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            ans += s + " ";
        if (i % 2 == 1)
            ans += s2 + " ";
        if (i != (n - 1))
            ans += s3 + " ";
    }
    ans += "it";
    cout << ans << nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
