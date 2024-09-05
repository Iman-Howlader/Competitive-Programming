/**
 *   Author : iman321
 *   Created: 2024-02-17 23:00:34
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
    vector<int> a(2 * n);
    map<int, int> mp;
    set<int> st;
    bool flag = false;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] > 3)
            flag = true;
        st.insert(a[i]);
    }

    if (flag || st.size() != n)
    {
        cout << -1 << nl;
        return;
    }
    vector<int> freq;
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1)
        {
            freq.push_back(1);
        }
        else if (i == (n - 1) / 2)
        {
            freq.push_back(3);
        }
        else
            freq.push_back(2);
    }
    if (n == 1)
    {
        freq[0] = 2;
    }
    // for(auto it:freq)
    //     cout << it << " ";
    // cout << nl;
    int k = 0;
    for (auto it : mp)
    {
        if (it.second != freq[k++])
        {
            cout << -1 << nl;
            return;
        }
    }
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << nl;
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
