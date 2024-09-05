#include <bits/stdc++.h>
using namespace std;
#define fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
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
int cs=1;
/*const int N = 2e7;
bool S[N + 1] = {0};
void seive()
{
    S[0] = S[1] = true;
    for (ll i = 2; (ll)i * i <= N; i++)
    {
        if (S[i] == false)
        {
            for (size_t j = i * i; j <= N; j += i)
            {
                S[j] = true;
            }
        }
    }
}
/*********************************Code Start From Here************************************/
int n,k;
bool f(int mid) 
{
    // check if the number of integer from 1 to mid that are not divisible by n is >= k
    int div=mid/n;  // there are floor(mid/n) number of multiples of n between 1 to mid;
    int notDiv=mid-div;
    return notDiv>=k;
}
void solve()
{
    cin>>n>>k;
    int low=1,high=k*10,ans;
    while (high>=low)
    {
        int mid=low+(high-low)/2;
        cout<<low<<" "<<mid<<" "<<high<<nl;
        if(f(mid))
        {
            ans=mid;
            cout<<ans<<nl;
            high=mid-1;
        }
        else
        {
            low=mid+1;
            cout<<"*"<<low<<nl;
        }

    }
    cout<<ans<<nl;
}
int main()
{
    fast;
    // seive();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
