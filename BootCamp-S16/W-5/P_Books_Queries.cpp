/**
*   Author : iman320
*   Created: 2023-12-09 14:38:09
**/
#include <bits/stdc++.h>
using namespace std;
#define    fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define    nl                    '\n'
#define    ll                     long long
#define    all(x)                 x.begin(), x.end()
#define    prec(n)                fixed << setprecision(n)
#define    yes                    cout << "YES\n";
#define    no                     cout << "NO\n";
#define    css                    cout<<"Case "<<cs++<<": "
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
int cs=1;
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

vector<int>vec(2000007,0);
void solve()
{
    int n;
    cin >> n;
    char ch;
    int idx;
    int i = 0, j=1;
    while (n--)
    {
        cin >> ch >> idx;
        if (ch == 'L')
        {
            vec[idx]=i;
            i--;
        }
        else if (ch == 'R')
        {
            vec[idx]=j;
            j++;
        }
        else
        {
            cout<<min(abs(vec[idx]-i),abs(j-vec[idx]))-1<<nl;
        }
    }
}
int main()
{
    fast;
    // seive();
    int tc=1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
}
