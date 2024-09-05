/**
 *   Author : iman321
 *   Created: 2024-02-19 23:09:18
 **/
#include <bits/stdc++.h>
using namespace std;
#define    fast                   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define    nl                    '\n'
#define    ll                     long long
int mod=1e7;
ll bin_pow(int a,int b)
{
    ll ans=1;
    while (b)
    {
        if(b%2==1)
        {
            ans= (ans*a)%mod;
            b--;
        }
        else
        {
            a= (a*a)%mod;
            b/=2;
        }
    }
    return ans;
    
}
void solve()
{
    int a,b;
    cin>>a>>b;

    ll x= bin_pow(a,b);
    //cout<<a<<" "<<b<<nl;
    cout<<x%10<<nl;
    
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
