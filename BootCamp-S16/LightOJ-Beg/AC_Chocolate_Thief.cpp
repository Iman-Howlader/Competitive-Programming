/**
 *   Author : iman321
 *   Created: 2024-02-16 00:29:37
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
    map<int, pair<int, string>> mp;

    int m = n;
    while (n--)
    {
        string s;
        int a, b, c;
        cin >> s >> a >> b >> c;

        int tmp = a * b * c;
        // cout<<tmp<<nl;
        mp[tmp].first++;
        mp[tmp].second = s;
    }

    // for (auto x : mp)
    // {
    //     //cout << x.first << " " << x.second.first << " " << x.second.second << nl;
    // }

    vector<pair<int, string>> a;

    bool f = false;
    for (auto it : mp)
    {
        if (it.second.first == 1)
        {
            a.push_back({it.first, it.second.second});
        }
    }

    // cout << "---" << a.size() << nl;
    if (a.empty())
    {
        cout << "no thief" << nl;
        return;
    }
    sort(all(a));

    if (a.size() > 2)
    {
        cout << a[2].second << " took chocolate from " << a[0].second << nl;
    }
    else
        cout << a[1].second << " took chocolate from " << a[0].second << nl;

    // if (mn > mx)
    // {
    //     swap(mn, mx);
    //     swap(x, y);
    // }

    // if (f)
    // {
    //     cout << x << " took chocolate from " << y << nl;
    // }
    // else
    // {
    //     cout << "no thief" << nl;
    // }
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
