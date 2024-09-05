/**
 *   Author : iman320
 *   Created: 2023-12-30 12:49:55
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
    vector<ll> price(n + 1), frnt_col(n + 1), back_col(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> frnt_col[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> back_col[i];
    }
    map<pair<int, int>, priority_queue<int, vector<int>, greater<>>> mp;
    for (int i = 1; i <= n; i++)
    {
        pair<int, int> tmp = {frnt_col[i], back_col[i]};
        mp[tmp].push(price[i]);
    }
    int m;
    cin >> m;
    int buyer;
    while (m--)
    {
        cin >> buyer;
        int ans = INT_MAX;
        int frnt, back;

        pair<int, int> tmp;
        for (int i = 1; i <= 3; i++)
        {
            tmp = {buyer, i};
            if (!mp[tmp].empty() && mp[tmp].top() < ans)
            {
                ans = mp[tmp].top();
                frnt = buyer;
                back = i;
            }
        }

        for (int i = 1; i <= 3; i++)
        {
            tmp = {i, buyer};
            if (!mp[tmp].empty() && mp[tmp].top() < ans)
            {
                ans = mp[tmp].top();
                frnt = i;
                back = buyer;
            }
        }
        if (ans == INT_MAX)
        {
           ans=-1;
        }
        else
        {
            mp[{frnt, back}].pop();
        }
        cout<<ans<<" ";
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
