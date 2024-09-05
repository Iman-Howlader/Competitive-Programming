#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int x, y;
    x = max({a[0], a[1], a[2]});
    y = min({a[0], a[1], a[2]});
    for (int i = 0; i < 3; i++)
    {
        if (a[i] != x && a[i] != y)
        {
            cout << a[i];
        }
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
