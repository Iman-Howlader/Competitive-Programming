/**
 *   Author : iman320
 *   Created: 2024-01-01 13:47:02
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
    string str;

    cin>>str;
    int n=str.size();
    vector<int>vec(n+1,0);
    vec[0]=1;
    for (int i = 0; i <n; i++)
    {
        if(vec[i]==0) continue;
        if(i+5<=n && str.substr(i,5)=="dream")
        {
            vec[i+5]=1;
        }
        if(i+5<=n && str.substr(i,5)=="erase")
        {
            vec[i+5]=1;
        }
        if(i+6<=n && str.substr(i,6)=="eraser")
        {
            vec[i+6]=1;
        }
        if(i+7<=n && str.substr(i,7)=="dreamer")
        {
            vec[i+7]=1;
        }
    }
    if(vec[n])
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
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
