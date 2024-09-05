#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    int n, a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || c + b >= 10)
        {
            cout << "YES" << nl;
        }
        else
            cout << "NO\n";
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
