#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl                    '\n'
#define ll                     long long
#define ve                     vector<int>
#define pb(x)                  push_back(x)
#define pp                     pop_back()
#define all(x)                 x.begin(), x.end()
#define gcd(a, b)              __gcd(a, b)
#define prec(n)                fixed << setprecision(n)
#define yes                    cout << "YES\n";
#define no                     cout << "NO\n";
#define cs       \
    int css = 1; \
    cout << "Case " << css++;
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
template<typename T>T lcm(T a,T b){return a/gcd(a,b)*b;}
// const int N = 2e7;
// bool S[N + 1] = {0};
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
// }
/*********************************Code Start From Here************************************/
void solve()
{
   // bool flg=false;
    int n,k,q,l,r;
    cin>>n>>k>>q;
    int x=2e5+2;
    vector<ll>a(x,0);
    while (n--)
    {
        cin>>l>>r;
        a[l]++;
        a[r+1]--;

    }
    for (size_t i = 1; i < x; i++)
    {
        a[i]+=a[i-1];
    }
    for (size_t i = 0; i <x; i++)
    {
        if(a[i]>=k)
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
        if(i>0)
        a[i]+=a[i-1];
    }
    while (q--)
    {
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<nl;
    }
    
    
    
    
    
}
int main()
{
    fast;
    // seive();
    ll t;
    //cin >> t;
    //while (t--)
    {
        solve();
    }
    return 0;
}
