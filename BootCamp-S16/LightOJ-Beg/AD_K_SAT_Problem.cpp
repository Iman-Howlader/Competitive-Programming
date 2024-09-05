/**
 *   Author : iman321
 *   Created: 2024-02-16 15:32:37
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

int visited[110];
int arr[33][33];

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }

        int p;
        cin >> p;

        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < p; i++)
        {
            int x;
            cin >> x;
            visited[x] = 1;
        }

        int j, flag = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (arr[i][j] > 0)
                {
                    if (visited[arr[i][j]])
                        break;
                }
                else if (arr[i][j] < 0)
                {
                    if (visited[arr[i][j]] == 0)
                        break;
                }
            }
            if (j > k)
            {
                flag = 0;
                break;
            }
        }

    if (flag)
    {
        yes;
    }
    else
        no;
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
