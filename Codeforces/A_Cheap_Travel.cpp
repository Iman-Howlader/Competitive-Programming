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
    int n, m, a, b, y=0;
    cin >> n >> m >> a >> b;
    int z = m;
    int x = n * a;
    ///5 2 2 3
    while (n > m)
    {
        cout<<y<<" ";
        y += (z*b);
        m+=z;
        cout<<"m :"<<m<<nl;
    }
    cout<<nl;
    cout<<x<<" "<<y<<nl;
    cout <<min(x, y) << nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
