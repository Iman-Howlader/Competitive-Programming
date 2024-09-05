/**
 *   Author : iman321
 *   Created: 2024-04-07 00:36:41
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    vector<long long> candi(n), orange(n);

    long long mn_candi = LONG_LONG_MAX, mn_orange = LONG_LONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> candi[i];
        mn_candi = min(mn_candi, candi[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> orange[i];
        mn_orange = min(mn_orange, orange[i]);
    }

    long long move = 0;
    for (int i = 0; i < n; i++)
    {
        move += max(candi[i] - mn_candi, orange[i] - mn_orange);
    }
    cout << move << endl;
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