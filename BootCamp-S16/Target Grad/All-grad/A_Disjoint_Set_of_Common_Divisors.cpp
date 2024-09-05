/**
 *   Author : iman321
 *   Created: 2024-05-09 13:26:40
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

const int N = 1e7 + 8;
vector<bool> isPrime(N, true);
void seive()
{
    isPrime[0] =isPrime[1]= false;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
vector<ll> PrimeFactorize(ll num)
{
    vector<ll> vec;
    for (ll i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            vec.pb(i);
            while (num % i == 0)
            {
                num /= i;
            }
        }
    }
    if (num > 1)
    {
        vec.pb(num);
    }
    return vec;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    int cnt = 0;
    vector<ll> v1 = PrimeFactorize(a);
    vector<ll> v2 = PrimeFactorize(b);
    vector<ll>common;
    set_intersection(all(v1),all(v2),back_inserter(common));
    cout<<common.size()+1<<nl;
}
int main()
{
    //seive();
    fast;
    int t = 1;
    // cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}