/**
 *   Author : iman320
 *   Created: 2023-12-18 17:58:08
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
#define css cout << "Case " << cs++ << ": "
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
void solve()
{
    char a, b;
    int n;
    cin >> a >> b >> n;
    n=n%4;
    if (n % 2 == 0)
    {
        cout << "undefined" << nl;
    }
    else
    {
        if (n == 1)
        {
            if (a == '^')
            {
                if (b == '>')
                {
                    cout << "cw" << nl;
                }
                else
                {
                    cout << "ccw" << nl;
                }
            }
            else if (a == '>')
            {
                if (b == 'v')
                {
                    cout << "cw" << nl;
                }
                else
                {
                    cout << "ccw" << nl;
                }
            }
            else if (a == 'v')
            {
                if (b == '<')
                {
                    cout << "cw" << nl;
                }
                else
                {
                    cout << "ccw" << nl;
                }
            }
            else if (a == '<')
            {
                if (b == '^')
                {
                    cout << "cw" << nl;
                }
                else
                {
                    cout << "ccw" << nl;
                }
            }
        }
        else
        {
            if (a == '^')
            {
                if (b == '<')
                {
                    cout << "cw" << nl;
                }
                else
                {
                    cout << "ccw" << nl;
                }
            }
            else if (a == '>')
            {
                if (b == '^')
                {
                    cout << "cw" << nl;
                }
                else
                {
                    cout << "ccw" << nl;
                }
            }
            else if (a == 'v')
            {
                if (b == '>')
                {
                    cout << "cw" << nl;
                }
                else
                {
                    cout << "ccw" << nl;
                }
            }
            else if (a == '<')
            {
                if (b == 'v')
                {
                    cout << "cw" << nl;
                }
                else
                {
                    cout << "ccw" << nl;
                }
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
    while (tc--)
    {
        solve();
    }
}
