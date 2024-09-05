/**
 *   Author : iman320
 *   Created: 2024-01-01 12:41:59
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
    vector<string> vec(n);
    int mxsize = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if ((int)vec[i].size() % 2 == 0)
        {
            vec[i].pop_back();
            if (vec[i].size() == 1)
            {
                vec[i].push_back('a');
                vec[i].push_back('a');
            }
        }

        mxsize = max(mxsize, (int)vec[i].size());
    }

    for (string str : vec)
    {
        int tmp = mxsize - str.size();
        tmp /= 2;
        while (tmp--)
        {
            cout << " ";
        }
        cout << str << nl;
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
