/**
 *   Author : iman320
 *   Created: 2024-01-08 14:23:10
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

bool comp(pair<string,pair<int,int>>&a, pair<string,pair<int,int>>&b)
{
    if(a.first==b.first)
    {
        return a.second.first>b.second.first;
    }

    return a.first<b.first;
}
void solve()
{
    int n;
    cin>>n;
    vector<pair<string,pair<int,int>>>vec;
    string tmp;
    int x;
    for (int i = 0; i <n; i++)
    {
        cin>>tmp>>x;
        vec.push_back({tmp,{x,i+1}});
    }
    sort(vec.begin(),vec.end(),comp);
    for(auto x:vec)
    {
        //cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<nl;
        cout<<x.second.second<<nl;
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
