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
    int n, m, p, d = 0, i = 1;
    cin >> n >> m >> p;
    vector<int> a;
    while (d <= n)
    {
        if (d == 0)
        {
            d = m;
        }
        else
        {
            d = m + p * i;
            i++;
        }
        if (d <= n)
        {
            a.push_back(d);
        }
    }
    cout << a.size() << nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
