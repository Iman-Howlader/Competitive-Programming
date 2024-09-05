/**
 *   Author : iman320
 *   Created: 2024-01-12 10:23:22
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
    int n, m, x;
    cin >> n >> m;
    deque<int> dq;
    string str;
    while (m--)
    {
        cin >> str;
        if (str[1] == 'u')
        {
            cin >> x;
            if (dq.size() == n)
            {
                cout << "The queue is full" << nl;
            }
            else if (str[4] == 'L')
            {
                dq.push_front(x);
                cout << "Pushed in left: " << dq.front() << nl;
            }
            else
            {
                dq.push_back(x);
                cout << "Pushed in right: " << dq.back() << nl;
            }
        }
        else
        {
            if (dq.empty())
            {
                cout << "The queue is empty" << nl;
            }
            else if (str[3] == 'L')
            {
                cout << "Popped from left: " << dq.front() << nl;
                dq.pop_front();
            }
            else
            {
                cout << "Popped from right: " << dq.back() << nl;
                dq.pop_back();
            }
        }
    }
}
int main()
{
    fast;
    // seive();
    int tc = 1;
    cin >> tc;
    for (int z = 1; z <= tc; z++)
    {
        cout << "Case " << z << ": " << nl;
        solve();
    }
}
