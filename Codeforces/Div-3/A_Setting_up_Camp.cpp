/**
 *   Author : iman321
 *   Created: 2024-04-08 00:19:59
 **/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans= a+ (b+c+2)/3;

    if(b%3==1 && c<2)
    {
        ans=-1;
    }
    if(b%3==2 && c==0)
    {
        ans=-1;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        //cout<<"Case "<<tc<<" ";
        solve();
    }
}