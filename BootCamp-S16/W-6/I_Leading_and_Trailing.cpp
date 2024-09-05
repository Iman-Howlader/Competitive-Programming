/**
 *   Author : iman321
 *   Created: 2024-02-20 14:47:57
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
int mod = 1000;

int leading_zero(ll base, ll power)
{
    double x = power * log10(base);

    x = x - floor(x);
    ll ans = pow(10, x) * 100;
    // cout<<ans<<nl;
    //  x=log10^(y)
    return ans;
}
string tariling_zero(ll base, ll power)
{
    ll ans = 1;

    while (power)
    {
        if (power % 2 == 1)
        {
            ans = (ans * base) % mod;
            power--;
        }
        else
        {
            base = (base * base) % mod;
            power /= 2;
        }
    }

    string res = to_string(ans);
    while(res.size() < 3)
    {
        res = '0' + res;
    }
    return res;
}
void solve()
{
    int n;
    cin >> n;
    while (n--)
    {

        ll base, power;
        cin >> base >> power;
        cout << leading_zero(base, power) << "..." << tariling_zero(base, power) << nl;
    }
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    // cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
