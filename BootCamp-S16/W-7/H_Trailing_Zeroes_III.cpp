/**
*   Author : iman320
*   Created: 2023-12-16 00:35:45
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

ll check(ll n)
{
    ll zero=0;
    for (ll i = 5; n/i>=1; i*=5)
    {
        zero+=(n/i);
    }
    return zero;
}
void solve()
{
    int q;
    cin>>q;
    ll l=1,h=1e18,ans=-1;
    while (l<=h)
    {
        ll mid=l+(h-l)/2;
        ll count=check(mid);
        if(count==q)
        {
            ans=mid;
            h=mid-1;
        }
        else if (count>q)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(ans!=-1)
    cout<<ans<<nl;
    else{
        cout<<"impossible"<<nl;
    }
    
}
int main()
{
    fast;
    // seive();
    int tc=1;
    cin >> tc;
    while (tc--)
    {
        css;
        solve();
    }
}
