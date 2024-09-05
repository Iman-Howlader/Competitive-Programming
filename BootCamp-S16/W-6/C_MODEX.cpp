/**
 *   Author : iman321
 *   Created: 2024-02-19 19:34:45
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

ll bin_pow(ll x,ll y,ll m)
{
    ll ans=1;
    while (y)
    {
        if(y%2==1)
        {
            ans=(ans*x)%m;
            y--;
        }
        else
        {
            x= (x*x)%m;
            y/=2;
        }
    }
    return ans;
    
}
void solve()
{
    ll x,y,m;
    cin>>x>>y>>m;

    cout<<bin_pow(x,y,m)<<nl;
}
int main()
{
    fast;
    // seive();
    int tc=1,x;
    cin >> tc;
    for (int z = 1; z <=tc; z++)
    {
        //cout<<"Case "<<z<<": ";
        solve();
    }
    cin>>x;
}
