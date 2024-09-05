/**
 *   Author : iman321
 *   Created: 2024-05-03 21:19:02
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
vector<int> primes;
vector<bool> isPrime(N, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            primes.pb(i);
        }
    }
}
void solve()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        if (isPrime[n])
        {
            cout << 0 << nl;
        }
        else
        {
            int cnt=0;
            for (int i = n;!isPrime[i]; i++)
            {
                cnt++;
            }
            for (int i = n;!isPrime[i]; i--)
            {
                cnt++;
            }
            cout << cnt << nl;
        }
    }
}
int main()
{
    fast;
    int t = 1;
    sieve();
    // cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}