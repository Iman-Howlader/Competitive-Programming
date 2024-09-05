/**
 *   Author : iman320
 *   Created: 2023-12-31 14:24:56
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
#define inp(n, vec)                 \
        for (int i = 0; i < n; i++) \
        {                           \
                int x;              \
                cin >> x;           \
                vec.push_back(x);   \
        }
#define out(v)                    \
        for (auto x : v)          \
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

void solve()
{
        ll n, m;
        cin >> n >> m;
        ll mx = (n - m + 1) * (n - m) / 2;
        ll tmp1 = n / m;
        ll tmp2 = tmp1 + 1;
        ll rem = n % m;
        ll mn = (tmp1 * (tmp1 - 1) / 2) * (m - rem) + (tmp2 * (tmp2- 1) / 2) * rem;

        cout << mn << " " << mx << nl;
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
