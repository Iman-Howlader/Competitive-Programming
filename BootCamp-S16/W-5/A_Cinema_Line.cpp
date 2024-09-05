/**
 *   Author : iman320
 *   Created: 2024-01-06 14:32:50
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

bool check(map<int, int> &mp)
{
    if (mp[25] < 0 || mp[50] < 0 || mp[100] < 0)
    {
        return true;
    }
    return false;
}
void solve()
{
    int n, x;
    cin >> n;
    map<int, int> mp;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 50)
        {
            mp[25]--;
            if (check(mp))
            {
                cout << "NO" << nl;
                return;
            }
            mp[50]++;
        }
        else if (x == 100)
        {
            if (mp[50] > 0)
            {
                mp[50]--;
                mp[25]--;
            }
            else
            {
                mp[25] -= 3;
            }
            if (check(mp))
            {
                cout << "NO" << nl;
                return;
            }
            mp[100]++;
        }
        else
        {
            mp[x]++;
        }
    }
    cout << "YES" << nl;
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
