/**
 *   Author : iman321
 *   Created: 2024-02-16 09:41:32
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
const int MX = 10005;
int d[MX];
void cnt_div()
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = i; j <= 1000; j += i)
        {
            d[j]++;
        }
    }
}
void solve()
{
    cnt_div();
    vector<pair<int,int>>vec;
    for (int i = 1; i <=1000; i++)
    {
        vec.push_back(make_pair(d[i],-i));
    }
    
    sort(vec.begin(),vec.end());
    int t,n;
    cin>>t;
    for (int i = 1; i <=t; i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": ";
        cout<<-vec[n-1].second<<nl;
    }
}
int main()
{
    fast;
    // seive();
    int tc=1;
    //cin >> tc;
    for (int z = 1; z <=tc; z++)
    {
        //cout<<"Case "<<z<<": ";
        solve();
    }
}
