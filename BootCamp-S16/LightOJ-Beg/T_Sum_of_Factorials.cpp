/**
 *   Author : iman321
 *   Created: 2024-02-16 19:06:41
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
// const ll N = 2e7 + 7;
// bool S[N + 1];
// vector<ll> primes;
// void seive()
// {
//     S[0] = S[1] = true;
//     for (ll i = 2; (ll)i * i <= N; i++)
//     {
//         if (S[i] == false)
//         {
//             for (size_t j = i * i; j <= N; j += i)
//             {
//                 S[j] = true;
//             }
//         }
//     }
//     for (size_t i = 2; i <= N; i++)
//     {
//         if (!S[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }

vector<ll> fact(21);
void pre_factorial_func()
{
    fact[0] = 1;

    ll x = fact[0];

    for (int i = 1; i < 20; i++)
    {
        fact[i] = i * x;
        x = fact[i];
    }
}
void solve()
{
    ll n;
    cin >> n;

    vector<ll> a;

    for (int i = 19; i >= 0; i--)
    {
        if (fact[i] <= n)
        {
            n -= fact[i];
            a.push_back(i);
        }
    }

    if (n != 0)
        cout << "impossible" << nl;
    else
    {

        cout << a.back() << "!";
        for (int i = a.size() - 2; i >= 0; i--)
        {
            cout << "+" << a[i] << "!";
        }
        cout << nl;
    }
}
int main()
{
    fast;
    // seive();

    pre_factorial_func();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        cout << "Case " << z << ": ";
        solve();
    }
}
