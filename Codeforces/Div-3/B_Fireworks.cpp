/**
 *   Author : iman321
 *   Created: 2024-04-08 00:43:00
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    long long a, b, c;
    cin>>a>>b>>c;
    long long ans = 2;
    ans+= (c/b);
    ans+= (c/a);
    cout<<ans<<endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}