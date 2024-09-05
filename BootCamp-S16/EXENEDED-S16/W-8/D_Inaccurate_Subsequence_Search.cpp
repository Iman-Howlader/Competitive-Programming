/**
 *   Author : iman321
 *   Created: 2024-04-09 21:24:05
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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m);
    map<int, int> freqA, freqB;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        freqB[b[i]]++;
    }

    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        freqA[a[i]]++;
        if (i < m - 1)
        {
            if (freqA[a[i]] <= freqB[a[i]])
                cnt++;
        }
        else
        {
            if (freqA[a[i]] <= freqB[a[i]])
                cnt++;
            if (i - m >= 0)
            {
                freqA[a[i - m]]--;
                if (freqA[a[i - m]] < freqB[a[i - m]])
                    cnt--;
            }

            ans += cnt >= k;
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