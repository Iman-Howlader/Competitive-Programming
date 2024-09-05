/**
 *   Author : iman320
 *   Created: 2024-01-12 11:19:42
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


bool is_divisible(string &a, ll &b)
{
    ll ans = 0;
    // cout<<a<<nl;
    // int tmp;
    for (char c : a)
    {
        if (c == '-')
        {
            continue;
        }
        ans = ans * 10 + (c - '0');
        ans = ans % b;
    }
    // cout<<ans<<nl;
    return ans == 0;
}
void solve()
{
    string a;
    ll b;
    cin >> a >> b;
    // is_divisible(a, b);
    if (is_divisible(a, b))
    {
        cout << "divisible" << nl;
    }
    else
    {
        cout << "not divisible" << nl;
    }
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        cout << "Case " << z << ": ";
        solve();
    }
}
