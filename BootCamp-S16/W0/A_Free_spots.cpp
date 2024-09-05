/**
 *   Author : iman320
 *   Created: 2023-12-18 12:26:41
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
    int W, H, N;
    while (cin >> W >> H >> N)
    {
        if (W == 0 && H == 0 && N == 0)
        {
            break;
        }
        int empty = H * W;
        int arr[W + 1][H + 1] = {0};
        while (N--)
        {
            int X1, X2, Y1, Y2;
            cin >> X1 >> Y1 >> X2 >> Y2;
            for (int i = min(X1, X2); i <= max(X1, X2); i++)
            {
                for (int j = min(Y1, Y2); j <= max(Y1, Y2); j++)
                {
                    if (!arr[i][j])
                    {
                        arr[i][j] = 1;
                        empty--;
                    }
                }
            }
        }
        if (empty == 1)
        {
            cout << "There is one empty spot." << nl;
        }
        else if (empty)
        {
            cout << "There are " << empty << " empty spots." << nl;
        }
        else
        {
            cout << "There is no empty spots." << nl;
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
