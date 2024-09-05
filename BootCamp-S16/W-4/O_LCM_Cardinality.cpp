/**
 *   Author : iman321
 *   Created: 2024-02-09 09:47:12
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
ll lcm(ll a, ll b)
{
    return (a * b / __gcd(a, b));
}
void solve()
{
    ll n;
    vector<ll> div;
    //bool flag=false;
    while (cin >> n && n != 0)
    {

        div.clear();

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                div.push_back(i);
                if (n / i != i)
                    div.push_back(n / i);
            }
        }
        int sz=div.size();
        int cnt = 0;
        for (int i = 0; i < sz; i++)
        {
            for (int j = i; j < sz; j++)
            {
                if (lcm(div[i], div[j]) == n)
                {
                    cnt++;
                }
            }
        }
        cout << n << " " << cnt<<nl;
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
