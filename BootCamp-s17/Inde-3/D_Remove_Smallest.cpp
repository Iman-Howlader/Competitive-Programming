/**
 *   Author : iman321
 *   Created: 2024-04-06 16:42:10
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    if (n == 1)
    {
        cout << "YES\n";
        return;
    }
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) <= 1)
        {
            continue;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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