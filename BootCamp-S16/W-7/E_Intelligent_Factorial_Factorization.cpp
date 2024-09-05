/**
 *   Author : iman321
 *   Created: 2024-02-21 23:48:17
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

vector<int> prime_fact(ll n)
{
    vector<int> tmp;
    for (int i = 2; i * 1ll * i <= n; i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            tmp.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        tmp.push_back(n);
    return tmp;
}

void solve()
{
    int n;
    cin >> n;
    int m=n;
    map<int, int> mp;
    for (int i = 2; i <= n; i++)
    {
        auto vec= prime_fact(i);
        for(auto x:vec)
        {
            mp[x]++;
        }
    }
    int tmp = mp.size()-1;

    cout<<m<<" = ";

    for(auto x:mp)
    {
        cout<<x.first<<" ("<<x.second<<")";
        if(tmp)
        {
            cout<<" * ";
            tmp--;
        }
    }
    cout<<nl;

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
