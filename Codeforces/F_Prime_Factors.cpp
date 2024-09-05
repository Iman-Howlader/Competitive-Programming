/**
 *   Author : iman321
 *   Created: 2024-02-19 23:38:02
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

const int N = 1e6 + 5;
vector<bool> isPrime(N, true);
vector<int> primes;
void seive()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; 1ll * i * i < N; i++)
    {
        if (!isPrime[i])
            continue;
        for (int j = i * i; j < N; j += i)
        {
            isPrime[j] = false;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}
vector<int> prime_fact(int n)
{
    vector<int> ans;

    for (auto &x : primes)
    {
        if (x * x > n)
            break;
        while (n % x == 0)
        {
            ans.push_back(x);
            n /= x;
        }
    }

    if (n > 1)
        ans.push_back(n);

    return ans;
}

void solve()
{
    int n;
    seive();
    while (true)
    {
        cin >> n;
        if (n == 0)
            return;

        cout << n << " = ";
        if (n < 0)
            cout << -1 << " x ";
        n = abs(n);

        vector<int> vec = prime_fact(n);

        // out(primes);
        int cnt = 0;
        for (auto x : vec)
        {
            cout << x;
            cnt++;
            if (cnt != vec.size())
            {
                cout << " x ";
            }
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
