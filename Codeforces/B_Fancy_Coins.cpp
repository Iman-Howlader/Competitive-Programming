#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    int t, m, k, a1, ak;
    int ans;
    cin >> t;
    while (t--)
    {
        cin >> m >> k >> a1 >> ak;
        if (a1 == 0 && ak == 0)
        {
            ans = m / k + m - (m / k) * k;
            cout << ans << nl;
        }
        else if (a1 + ak >= m)
            cout << "0\n";
        else
        {
            int x=m-(k*ak+a1);
            if(x)
            ans=ceil((float)x/k);
            else
            ans=x;
            cout<<ans<<nl;
        }
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
