/**
 *   Author : iman321
 *   Created: 2024-03-12 10:55:02
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        int diff=abs(a[i - 1] - a[i]);
        //cout<<diff<<endl;
        if (diff % 2 != 0 && (a[i-1]!=0 || a[i]!=0))
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