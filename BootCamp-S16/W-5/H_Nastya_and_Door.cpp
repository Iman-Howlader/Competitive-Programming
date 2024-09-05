/**
 *   Author : iman321
 *   Created: 2024-02-18 11:39:30
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
void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int>peak(n+1,0);

    for (int i = 1; i <n-1; i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            peak[i]++;
        }
    }

    vector<int>prefix_sum(n+1,0);
    prefix_sum[0]=a[0]+peak[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+peak[i];
    }

    int mx =-1,ans=-1;

    for(int i=0;i+k-1<n;i++)
    {
        int x= prefix_sum[i+k-2]-prefix_sum[i]+1;

        if(x>mx)
        {
            mx=x;
            ans= i;
        }
    }

    cout<<mx<<" "<<ans+1<<nl;
    


    
}
int main()
{
    fast;
    // seive();
    int tc=1;
    cin >> tc;
    for (int z = 1; z <=tc; z++)
    {
        //cout<<"Case "<<z<<": ";
        solve();
    }
}
