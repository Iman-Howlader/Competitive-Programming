/**
 *   Author : iman321
 *   Created: 2024-05-09 14:29:34
 **/

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define nl '\n'
#define fix(x) fixed << setprecision(x)
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define Yes cout << "Yes\n";
#define No cout << "No\n";
#define read(x) cin >> x;
#define write(x) cout << x;
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = a; i >= b; i--)
#define inputV(x, n)            \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define mod 1e9 + 7
#define INF 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    int n, x;
    cin >> n;
    vector<int> a;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (mp.find(x) == mp.end())
        {
            a.push_back(x);
        }
        mp[x] = i;
    }

    int ans = -1;
    int tmp_i = -1, tmp_j = -1, sum_tmp = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j =i; j < a.size(); j++)
        {
            if (__gcd(a[i], a[j]) == 1)
            {
                ans = max(ans, (mp[a[i]] + mp[a[j]]));
            }
        }
    }
    cout<<ans<<nl;
}
int main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}