/**
 *   Author : iman321
 *   Created: 2024-04-05 23:50:28
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n, x;
    cin >> n;
    set<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i % 2 == 0)
            even.insert(x % 2);
        else
            odd.insert(x % 2);
    }

    if (odd.size() == 1 && even.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    fast;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}