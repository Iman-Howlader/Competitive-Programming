/**
 *   Author : iman320
 *   Created: 2024-01-06 11:44:44
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
void solve()
{
    int t, S1, S2, E1, E2;
    cin >> t >> S1 >> E1 >> S2 >> E2;
    string s;
    cin >> s;

    int d1 = S2 - S1;
    int d2 = E2 - E1;

    for (int i = 0; i < t; i++)
    {
        if (d1 != 0 || d2 != 0)
        {
            if (d1 < 0 && s[i] == 'W')
            {
                d1++;
            }
            if (d1 > 0 && s[i] == 'E')
            {
                d1--;
            }
            if (d2 < 0 && s[i] == 'S')
            {
                d2++;
            }
            if (d2 > 0 && s[i] == 'N')
            {
                d2--;
            }
        }
        if (d1 == 0 && d2 == 0)
        {
            cout << i + 1;
            return;
        }
    }
    cout << -1 << nl;
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
