/**
 *   Author : iman321
 *   Created: 2024-02-13 18:44:42
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

const int N = 120000 + 10;
int ans;
map<ll, ll> mp;
int n;
ll power[40];
vector<int>a(N);
void solve()
{
    power[0] = 1;
    for (int i = 1; i <= 31; i++)
    {
        power[i] = power[i - 1] * 2;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j <= 30; j++)
        {
            int t = power[j] - a[i];
            if (t == a[i])
            {
                if (mp[t] >= 2)
                    break;
            }
            else
            {
                if (mp[t])
                    break;
            }
        }
        if (j == 31)
            ans++;
    }

    cout << ans << endl;
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
