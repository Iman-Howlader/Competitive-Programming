#include <bits/stdc++.h>
using namespace std;
#define fast                          \
        ios_base::sync_with_stdio(0); \
        cin.tie(0);                   \
        cout.tie(0)
#define testcase  \
        int t;    \
        cin >> t; \
        while (t--)
#define nl "\n"

void solve()
{
        int a, b, c, d, ans;
        while (cin >> a >> b >> c >> d)
        {
                if (a == 0 && b == 0 && c == 0 && d == 0)
                        break;
                ans = 0;
                ans += (a - b + 40) % 40;
                ans += (c - b + 40) % 40;
                ans += (c - d + 40) % 40;

                cout<<ans*9 +1080<<nl;
        }
}
int main()
{

        fast;
        solve();
        return 0;
}
