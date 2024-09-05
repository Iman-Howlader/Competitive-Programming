/**
 *   Author : iman321
 *   Created: 2024-04-08 21:13:50
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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> vec(n * n);
    vector<int> tmp;

    for (int i = 0; i < n * n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    int arr[n][n];
    arr[0][0] = vec[0];

    int j = 0;
    for (int i = 1; i < n; i++)
    {
        arr[i][j] = arr[i - 1][j] + a;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i][j - 1] + b;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tmp.push_back(arr[i][j]);
        }
    }
    sort(all(tmp));
    if(vec==tmp)
    {
        YES;
    }
    else
    {
        NO;
    }
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