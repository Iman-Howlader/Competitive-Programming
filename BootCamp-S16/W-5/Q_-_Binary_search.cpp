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
int binary(vector<int>&a,int x)
{
    int low=0,high=a.size()-1,ans=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==x)
        {
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]<x)
        {
            low=mid+1;
            
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
    
}
void solve()
{
    bool flg=false;
    int n,k,x,ans;
    cin>>n>>k;
    vector<int>a;
    inp(n,a);
    while (k--)
    {
        cin>>x;
        ans=binary(a,x);
        cout<<ans<<nl;

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
