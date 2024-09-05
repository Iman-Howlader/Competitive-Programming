/**
 *   Author : iman321
 *   Created: 2024-02-18 21:44:03
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

int BS(vector<pair<int,int>>&vec,int target)
{
    int ans=-1;
    int l=0,r=vec.size()-1;
    while (l<=r)
    {
        int m=(l+r)/2;

        if(vec[m].first>=target)
        {
            r=m-1;
            ans=vec[m].second;
        }
        else
        {
            l=m+1;
        }
    }
    return ans;
    
}
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<pair<int,int>>prefix_sum(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(i==0)
        {
            prefix_sum[i].first=a[i];
            prefix_sum[i].second=i+1;
        }
        else
        {
            prefix_sum[i].first=a[i]+prefix_sum[i-1].first;
            prefix_sum[i].second=i+1;
        }
    }
    int q,x;
    cin>>q;
    while (q--)
    {
        cin>>x;
        cout<<BS(prefix_sum,x)<<nl;
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
