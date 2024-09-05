/**
 *   Author : iman320
 *   Created: 2024-01-02 23:44:23
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
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i] - a[i - 1]);
    }

    int ans = mx;
    for (int i = 1; i <= n; i++)
    {
        int dif = a[i] - a[i - 1];
        if (dif == mx)
            mx--;
        else if (dif > mx)
        {
            ans++;
            break;
        }
    }

    cout << ans << nl;
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
