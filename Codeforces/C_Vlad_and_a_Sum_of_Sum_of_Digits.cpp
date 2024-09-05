/**
 *   Author : iman321
 *   Created: 2024-02-19 20:50:48
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

int to_digit_sum(int n)
{
    int total = 0;

    while (n > 0)
    {
        total += (n % 10);
        n /= 10;
    }
    return total;
}
const int N = 2e5 + 5;
vector<int> pref(N);
void precalculate()
{
    pref[0] = 0;

    for (int i = 1; i < N; i++)
    {
        pref[i] = pref[i - 1] + to_digit_sum(i);
    }
}
void solve()
{
    int n;
    cin >> n;

    cout << pref[n] << nl;
}
int main()
{
    fast;
    // seive();
    int tc = 1;

    precalculate();
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        // cout<<"Case "<<z<<": ";
        solve();
    }
}
