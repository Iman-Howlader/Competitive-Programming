/**
 *   Author : iman320
 *   Created: 2023-12-11 18:43:07
 **/
#include <bits/stdc++.h>
using namespace std;
#define     fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define     nl '\n'
#define     ll long long
#define     all(x) x.begin(), x.end()
#define     prec(n) fixed << setprecision(n)
#define     yes cout << "YES\n";
#define     no cout << "NO\n";
#define     css cout << "Case " << cs++ << ": "
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
int cs = 1;
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
const int MAX = 1e6 + 7;
vector<int> visited(MAX, 0);
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0, ans = 0;
    int pointA, pointB;
    for (int r = 1, l = 1; r <= n; r++)
    {
        if (mp[a[r]])
        {
            mp[a[r]]++;
        }
        else
        {
            cnt++;
            mp[a[r]]++;
            while (cnt > k)
            {
                mp[a[l]]--;
                if (!mp[a[l]])
                {
                    cnt--;
                }
                l++;
            }
        }
        if (ans < max(ans, r - l + 1))
        {
            ans = max(ans, r - l + 1);
            pointA = l;
            pointB = r;
        }
    }
    cout << pointA << " " << pointB << nl;
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
}
