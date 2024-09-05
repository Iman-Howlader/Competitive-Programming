/**
 *   Author : iman321
 *   Created: 2024-05-08 19:17:05
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

int permutation(int n, int div)
{
    int ans = 0;
    while (n > 0)
    {
        ans += (n / div);
        n = n / div;
    }
    return ans;
}

int power(int n, int div)
{
    int ans = 0;
    while (n % div==0)
    {
        ans++;
        n = n / div;
    }
    return ans;
}
void solve()
{
    int n, r, p, q;
    cin >> n >> r >> p >> q;

    int a= permutation(n,2);
    int aa=permutation(n,5);

    int b=permutation(r,2);
    int bb=permutation(r,5);

    int c=permutation(n-r,2);
    int cc=permutation(n-r,5);

    int d=power(p,2);
    int dd=power(p,5);

    int ans= min(a-b-c+d*q,aa-bb-cc+dd*q);
    cout<<ans<<nl;

}
int main()
{
    fast;
    int t = 1;
    cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        cout << "Case " << tc << ": ";
        solve();
    }
}