#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int y = *max_element(a.begin(), a.end());
    int x = *min_element(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            cout << "0\n";
            return;
        }
    }
    cout << (x - y) + 1 << nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
