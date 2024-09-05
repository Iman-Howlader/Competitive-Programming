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
        double a, b ,c,x;
        int cnt=0;
        cin >> a >> b >> c;
        x = abs(a-b)/2;
        cnt=ceil(x/c);
        cout << cnt << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
