/**
 *   Author : iman321
 *   Created: 2024-02-23 19:55:48
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

ll fact_count(ll n, ll cnt)
{
    ll x = n;
    while (true)
    {
        ll tmp = x;
        ll devisor = n;

        while (tmp)
        {
            cnt -= (tmp / devisor);
            tmp /= devisor;
        }
        if (cnt <= 0)
        {
            break;
        }
        x++;
    }
    return x;
}
void solve()
{
    int n;
    cin >> n;

    ll ans = 1;
    for (int x : primes)
    {
        int cnt = 0;
        if (x * x > n)
            break;

        while (n % x == 0)
        {
            cnt++;
            n /= x;
        }
        ans = max(ans, fact_count(x, cnt));
    }
    if (n > 1)
        ans = max(ans, fact_count(n, 1));

    cout << ans << nl;
}
int main()
{
    fast;
    seive();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
