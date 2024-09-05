/**
 *   Author : iman321
 *   Created: 2024-02-19 20:01:45
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

const int N = 2e7 + 7;
vector<bool> isPrime(N, true);
vector<int> primes;

void seive()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (!isPrime[i])
        {
            continue;
        }
        for (int j = i * i; j <= N; j += i)
        {
            isPrime[j] = false;
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

vector<int> prime_fact(ll n)
{
    vector<int> tmp;

    for (auto x : primes)
    {
        if (x * x > n)
            break;
        while (n % x == 0)
        {
            n /= x;
            tmp.push_back(x);
        }
    }
    if (n > 1)
        tmp.push_back(n);

    return tmp;
}

vector<pair<ll, ll>> prime_fact_count(ll n)
{
    vector<pair<ll, ll>> tmp;

    for (auto &x : primes)
    {
        if (x * x > n)
            break;
        ll cnt = 0;
        while (n % x == 0)
        {
            n /= x;
            cnt++;
        }
        if (cnt != 0)
            tmp.push_back({x, cnt});
    }

    if (n > 1)
        tmp.push_back(make_pair(n, 1));

    return tmp;
}
void solve()
{
    ll n;
    seive();
    while (cin >> n)
    {
        if (n == 0)
            break;

        // vector<int> ans = prime_fact(n);
        vector<pair<ll, ll>> ans = prime_fact_count(n);
        for (auto &x : ans)
        {
            cout << x.first << "^" << x.second << " ";
        }
        cout << nl;
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
