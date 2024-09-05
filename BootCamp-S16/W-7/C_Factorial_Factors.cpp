/**
 *   Author : iman321
 *   Created: 2024-02-21 16:34:05
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define prec(n) fixed << setprecision(n)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define inp(n, vec)             \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vec.push_back(x);       \
    }
#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;
//----------------------------------------seive algorithm------------------------//
const ll N = 2e7 + 7;
bool S[N + 1];
vector<ll> primes;
void seive()
{
    S[0] = S[1] = true;
    for (ll i = 2; (ll)i * i <= N; i++)
    {
        if (S[i] == false)
        {
            for (size_t j = i * i; j <= N; j += i)
            {
                S[j] = true;
            }
        }
    }
    for (size_t i = 2; i <= N; i++)
    {
        if (!S[i])
        {
            primes.push_back(i);
        }
    }
}

map<ll, int> mp;
const int mxN=1e6+5;
int prime_fact(int n)
{
    int cnt = 0;
    for (auto x:primes)
    {
        if(x*x>n) break;
        while (n % x == 0)
        {
            cnt++;
            n /= x;
        }
    }
    if (n > 1)
        cnt++;
    return cnt;
}
void precalculate()
{
    for(int i=2;i<=mxN;i++)
    {
        mp[i]= mp[i-1]+prime_fact(i);
    }
}
void solve()
{
    int n;
    while (cin >> n)
    {
        cout<<mp[n]<<nl;
    }
}
int main()
{
    fast;
     seive();
    int tc = 1;
    // cin >> tc;
    precalculate();
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
