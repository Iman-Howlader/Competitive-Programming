#include <bits/stdc++.h>
using namespace std;
#define fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl                    '\n'
#define ll                     long long
const int mod=1e7;
ll binpow(ll n,ll x)
{
    ll ans=1;
    while (x)
    {
        if(x%2)
        {
            ans=(ans*1ll*n)%mod;
            x--;
        }
        else
        {
            n=(n*1ll*n)%mod;
            x/=2;
        }
    }
    return ans;
    
}
void solve()
{
    int n,x;
    cin>>n>>x;
    ll ans=binpow(n,x)%10;
    cout<<ans<<nl;
}
int main()
{
    fast;
    // seive();
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
