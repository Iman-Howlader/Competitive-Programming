#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    int n,t, b, c, h, ans = 0;
    cin >> n;
    while (n--)
    {
        cin >> b >> c >> h;
        if (c + h >= b)
            ans = b + (b - 1);
        else
        {
            ans = (c + h) * 2 + 1;
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
