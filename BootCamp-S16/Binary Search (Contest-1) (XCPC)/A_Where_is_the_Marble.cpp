/**
 *   Author : iman320
 *   Created: 2023-12-27 17:17:11
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

int Binary_Search(const vector<int> &a, int target)
{
    int l = 0, r = a.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int m = (r + l) / 2;

        if (a[m] == target)
        {
            ans = m;
            r = m - 1;
        }
        else if (a[m] > target)
        {
            r = m - 1;
        }
        else
        {

            l = m + 1;
        }
    }
    return ans;
}
void solve()
{
    int n, q, cs = 1;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            return;
        cout << "CASE# " << cs++ << ":" << nl;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        while (q--)
        {
            int x;
            cin >> x;
            int ans = Binary_Search(a, x);
            if (ans == -1)
            {
                cout << x << " not found" << nl;
            }
            else
            {
                cout << x << " found at " << ans + 1 << nl;
            }
        }
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
