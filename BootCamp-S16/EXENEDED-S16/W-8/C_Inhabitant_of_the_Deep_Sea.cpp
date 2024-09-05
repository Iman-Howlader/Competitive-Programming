/**
 *   Author : iman321
 *   Created: 2024-04-08 22:06:17
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
    ll n, k;
    cin >> n >> k;

    ll sum = 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum <= k)
    {
        cout << n << nl;
        return;
    }

    ll first_half = k / 2 + k % 2;
    ll last_half = k / 2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (first_half >= a[i])
        {
            first_half -= a[i];
            a[i] = 0;
            ans++;
        }
        else
        {
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (last_half >= a[i])
        {
            last_half -= a[i];
            a[i] = 0;
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << nl;
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