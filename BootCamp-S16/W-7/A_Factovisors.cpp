/**
 *   Author : iman321
 *   Created: 2024-02-21 08:25:10
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
map<ll, ll> mp;
void prime_fact(ll n)
{
    mp.clear();

    for (int i = 2; i * i <= n; i++)
    {
        int count = 0;
        while (n % i == 0)
        {
            n /= i;
            mp[i]++;
        }
    }
    if (n > 1)
        mp[n]++;
}

bool is_divisible(ll n, ll m)
{
    prime_fact(m);
    //cout<<n<<" "<<m<<nl;
    for (auto x : mp)
    {
        int p = x.first;
        int cnt = 0;
        int tmp = n;

        while (tmp / p)
        {
            cnt+= (tmp/p);
            tmp /= p;
        }
        //cout<<cnt<<nl;
        if (cnt < x.second)
            return false;
    }
    return true;
}
void solve()
{
    ll n, m;

    while (cin >> n >> m)
    {
        if (is_divisible(n, m))
        {
            cout << m << " divides " << n << "!" << nl;
        }
        else
        {
            cout << m << " does not divide " << n << "!" << nl;
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
